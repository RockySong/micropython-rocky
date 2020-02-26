:mod:`tf` --- Tensor Flow
=========================

.. module:: tf
   :synopsis: Tensor Flow

The ``tf`` module is capable of executing Quantized TensorFlow Lite Models
on the OpenMV Cam (not supported on the OpenMV Cam M4).

You can read more about how to create your own models that can run on the
OpenMV Cam `here <https://www.tensorflow.org/lite/microcontrollers>`__. In
particular:

   * Supported operations are listed `here <https://github.com/openmv/tensorflow/blob/openmv/tensorflow/lite/micro/kernels/all_ops_resolver.cc>`__.

     * Note that tensorflow lite operations are versioned. If no version numbers
       are listed after the operation then the min and max version supported are
       1. If there are numbers after an operation those numbers represent the
       minimum and maximum operation version supported.
     * If you are using Keras to generate your model be careful about only using
       operators that are supported by tensorflow lite for microcontrollers. Otherwise,
       your model will not be runnable by your OpenMV Cam.

   * Convert your model to a FlatBuffer by following the instructions `here <https://www.tensorflow.org/lite/microcontrollers/build_convert#model_conversion>`__.
   * Finally, quantize your model by following the instructions `here <https://www.tensorflow.org/lite/microcontrollers/build_convert#quantization>`__.

Alternatively, just follow Google's in-depth guide `here <https://github.com/openmv/tensorflow/blob/openmv/tensorflow/lite/micro/examples/person_detection/training_a_model.md>`__.
If you have problems with Google's in-depth guide please contact Google for help.

The final output ``.tflite`` model can be directly loaded and run by your
OpenMV Cam. That said, the model and the model's required sratch RAM must
fit within the available frame buffer stack RAM on your OpenMV Cam.

   * The OpenMV Cam M7 has about 384KB of frame buffer RAM. Please try
     to keep your model and it's required scratch buffer under 320 KB.
   * The OpenMV Cam H7 has about 496KB of frame buffer RAM. Please try
     to keep your model and it's required scratch buffer under 400 KB.
   * The OpenMV Cam H7 Plus has about 31MB of frame buffer RAM. That
     said, running a model anywhere near the that size will be extremely slow.

Alternatively, you can also load a model onto the MicroPython Heap or the OpenMV Cam frame buffer.
However, this significantly limits the model size on all OpenMV Cams.

Functions
---------

.. function:: tf.classify(path, img, [roi, [min_scale=1.0, [scale_mul=0.5, [x_overlap=0, [y_overlap=0]]]]])

   Executes the TensorFlow Lite image classification model on the ``img``
   object and returns a list of `tf_classification` objects. This method
   executes the network multiple times on the image in a controllable sliding
   window type manner (by default the algorithm only executes the network once
   on the whole image frame).

   ``path`` a path to a ``.tflite`` model to execute on your OpenMV Cam's
   disk. The model is loaded into memory, executed, and released all in
   one function call to save from having to load the model in the
   MicroPython heap. Pass ``"person_detection"`` to load the built-in
   person detection model from your OpenMV Cam's internal flash.

   ``roi`` is the region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle. Only pixels within the
   ``roi`` are operated on.

   ``min_scale`` controls how much scaling is applied to the network. At the
   default value the network is not scaled. However, a value of 0.5 would allow
   for detecting objects 50% in size of the image roi size...

   ``scale_mul`` controls how many different scales are tested out. The sliding
   window method works by multiplying a default scale of 1 by ``scale_mul``
   while the result is over ``min_scale``. The default value of ``scale_mul``,
   0.5, tests out a 50% size reduction per scale change. However, a value of
   0.95 would only be a 5% size reductioin.

   ``x_overlap`` controls the percentage of overlap with the next detector
   area of the sliding window. A value of zero means no overlap. A value of
   0.95 would mean 95% overlap.

   ``y_overlap`` controls the percentage of overlap with the next detector
   area of the sliding window. A value of zero means no overlap. A value of
   0.95 would mean 95% overlap.

.. function:: tf.segment(path, img, [roi])

   Executes the TensorFlow Lite image segmentation model on the ``img``
   object and returns a list of grayscale `image` objects for each
   segmentation class output channel.

   ``path`` a path to a ``.tflite`` model to execute on your OpenMV Cam's
   disk. The model is loaded into memory, executed, and released all in
   one function call to save from having to load the model in the
   MicroPython heap.

   ``roi`` is the region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle. Only pixels within the
   ``roi`` are operated on.

.. function:: tf.load(path, [load_to_fb=False])

   ``path`` a path to a ``.tflite`` model to load into memory on the MicroPython heap by default.

   NOTE! The MicroPython heap is only ~50 KB on the OpenMV Cam M7 and ~256 KB on the OpenMV Cam H7.

   Pass ``"person_detection"`` to load the built-in person detection model from your
   OpenMV Cam's internal flash. This built-in model does not use any Micropython Heap
   as all the weights are stored in flash which is accessible in the same way as RAM.

   ``load_to_fb`` if passed as True will instead reserve part of the OpenMV Cam frame buffer
   stack for storing the TensorFlow Lite model. You will get the most efficent execution
   performance for large models that do not fit on the heap by loading them into frame buffer
   memory once from disk and then repeatedly executing the model. That said, the frame buffer
   space used will not be available anymore for other algorithms.

   Returns a `tf_model` object which can operate on an image.

.. function:: tf.free_from_fb()

   Deallocates a previously allocated `tf_model` object created with ``load_to_fb`` set to True.

   Note that deallocations happen in the reverse order of allocation.

class tf_classification -- tf classification dection result
===========================================================

The tf_classification object is returned by `tf.classify()` or `tf_model.classify()`.

Constructors
------------

.. class:: tf.tf_classification()

   Please call `tf.classify()` or `tf_model.classify()` to create this object.

Methods
-------

.. method:: tf_classification.rect()

   Returns a rectangle tuple (x, y, w, h) for use with `image` methods
   like `image.draw_rectangle()` of the tf_classification's bounding box.

.. method:: tf_classification.x()

   Returns the tf_classification's bounding box x coordinate (int).

   You may also get this value doing ``[0]`` on the object.

.. method:: tf_classification.y()

   Returns the tf_classification's bounding box y coordinate (int).

   You may also get this value doing ``[1]`` on the object.

.. method:: tf_classification.w()

   Returns the tf_classification's bounding box w coordinate (int).

   You may also get this value doing ``[2]`` on the object.

.. method:: tf_classification.h()

   Returns the tf_classification's bounding box h coordinate (int).

   You may also get this value doing ``[3]`` on the object.

.. method:: tf_classification.classification_output()

   Returns a list of the classification label scores. The size of this
   list is determined by your model output channel size. For example,
   mobilenet outputs a list of 1000 classification scores for all 1000
   classes understood by mobilenet. Use ``zip`` in python to combine
   the classification score results with classification labels.

   You may also get this value doing ``[4]`` on the object.

class tf_model -- TensorFlow Model
==================================

If your model size is small enough and you have enough heap or frame buffer space you may wish
to directly load the model into memory to save from having to load it from disk
each time you wish to execute it.

Constructors
------------

.. class:: tf.tf_model()

   Please call `tf.load()` to create the TensorFlow Model object. TensorFlow Model objects allow
   you to execute a model from RAM versus having to load it from disk repeatedly.

Methods
-------

.. method:: tf_model.len()

   Returns the size in bytes of the `tf_model`.

.. method:: tf_model.height()

   Returns the input height of the model. You can use this to size your input
   image height appropriately.

.. method:: tf_model.width()

   Returns the input width of the model. You can use this to size your input
   image width appropriately.

.. method:: tf_model.channels()

   Returns the number of color channels in the model. 1 for grayscale
   and 3 for RGB.

.. method:: tf_model.classify(img, [roi, [min_scale=1.0, [scale_mul=0.5, [x_overlap=0, [y_overlap=0]]]]])

   Executes the TensorFlow Lite image classification model on the ``img``
   object and returns a list of `tf_classification` objects. This method
   executes the network multiple times on the image in a controllable sliding
   window type manner (by default the algorithm only executes the network once
   on the whole image frame).

   ``roi`` is the region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle. Only pixels within the
   ``roi`` are operated on.

   ``min_scale`` controls how much scaling is applied to the network. At the
   default value the network is not scaled. However, a value of 0.5 would allow
   for detecting objects 50% in size of the image roi size...

   ``scale_mul`` controls how many different scales are tested out. The sliding
   window method works by multiplying a default scale of 1 by ``scale_mul``
   while the result is over ``min_scale``. The default value of ``scale_mul``,
   0.5, tests out a 50% size reduction per scale change. However, a value of
   0.95 would only be a 5% size reductioin.

   ``x_overlap`` controls the percentage of overlap with the next detector
   area of the sliding window. A value of zero means no overlap. A value of
   0.95 would mean 95% overlap.

   ``y_overlap`` controls the percentage of overlap with the next detector
   area of the sliding window. A value of zero means no overlap. A value of
   0.95 would mean 95% overlap.

.. method:: tf_model.segment(img, [roi])

   Executes the TensorFlow Lite image segmentation model on the ``img``
   object and returns a list of grayscale `image` objects for each
   segmentation class output channel.

   ``roi`` is the region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle. Only pixels within the
   ``roi`` are operated on.
