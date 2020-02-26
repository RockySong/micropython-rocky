System Architecture
===================

Thanks for reading what of the tuturial has been completed so far. It probably
won't ever be done. Anyway, I'd like to discuss the system architecture quickly.

First, the OpenMV Cam is based off of the STM32 Microcontroller architecture because the
MicroPython pyboard is based off of the STM32 Microcontroller architecture. If the
project was started using some other system things might have been totally different.

Moving on, we choose not to use DRAM with the original OpenMV Cam because it made the
system too expensive to produce at low volumes. SDR DRAM (which is what the STM32 supports)
isn't the cheapest at low manufacturing volumes and greatly increases board design
complexity (e.g. you need to do 8-layer boards to route all the signals). As we've
revved the OpenMV Cam with a faster and faster main processor the SDR DRAM speed
also has not kept up with the internal RAM speed. On the STM32H7 for example the
internal RAM bandwidth is 3.2GB/s versus a maximum SDR RAM bandwidth of 666MB/s
even if we built the system with an 8-layer board using a 32-bit DRAM bus
requring 50+ I/O pins for the DRAM.

So, since we're built on the STM32 architecture and limited to using expensive
and slow SDR DRAM for now we haven't added it as our internal SRAM is way faster.
As production volumes go up and technology improves hopefully we'll be able to
have more memory while still keeping the OpenMV Cam simple to use.

Memory Architecture
-------------------

Given the above memory architecture limitations we built all of our code to run
inside of the STM32 microcontroller memory. However, the STM32 doesn't have one
large contigous memory map. It features different segments of RAM for different
situations.

First, there's a segment of RAM which contains global variables, the heap, and
the stack. The heap and global variables are fixed in size so only the stack
grows and shrinks. For performance reasons heap/stack collision is not checked
constantly so don't use recursive functions on the OpenMV Cam.

As for the heap, it's fixed in size versus growing towards the stack and managed
by MicroPython's garbage collector. MicroPython automagically free's up unused
blocks inside of the heap. However, the design of the MicroPython heap does not
allow it to be arbitrarily large (e.g. in the megabyte range) like heaps on PCs.
So, even if we have DRAM it would be hard to leverage using MicroPython's heap.

Next, there's a larger memory segment for the frame buffer to store images in.
On the bottom of the frame buffer new images are stored when functions like
`sensor.snapshot()` are called. Any unused space in the frame buffer is then
available to be used as a "frame buffer stack" that builds from the top of the
frame buffer down. This memory architecture design is what allows a lot of our
computer vision methods to execute without having to allocate large data
structures inside of the MicroPython heap.

That said, the frame buffer stack is still a stack and doesn't support random
allocations and deallocations. Luckily, most computer vision algorithms have very
predictable memory allocations. For ones that don't (like AprilTags) we allocate
a temporary heap inside of the frame buffer stack when we need it (again to avoid
fragmenting the MicroPython heap).

Finally, vision algorithms return their results (which are small usually) by
allocating objects in the MicroPython heap. The results can then be garbage
collected easily by MicroPython while the frame buffer stack is fully cleared
after any computer vision algorithms finish executing.

Now while this works great it means you can only have one big image in the frame
buffer in RAM. As the MicroPython heap is optimized for small objects storing
large 100KB images in it doesn't make sense. To enable more images to fit in RAM
we allow the frame buffer stack to be used for secondary image storage using
`sensor.alloc_extra_fb()`. By allocating a secondary frame buffer on the
frame buffer stack you can now have two or more images in RAM at the cost
of reducing memory space for more complex algorithms (like AprilTags).

So, that's the memory architecture. And... we allow images to be stored in
the frame buffer, heap, and the frame buffer stack. Yes, our code is rather
complex to handle all of this and it would have been great to just throw
everything in a large DRAM. But, now you know why this isn't the case.
