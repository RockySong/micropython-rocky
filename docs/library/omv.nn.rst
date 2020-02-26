:mod:`nn` --- neural networks
=============================

.. module:: nn
   :synopsis: neural networks

The ``nn`` module is used for neural networks.

Please see the examples that come with OpenMV IDE for how to use the NN module.

For more information about creating your own NN examples see please see the
`README on our github here <https://github.com/openmv/openmv/tree/master/ml/cmsisnn>`_.

class nn_class -- nn dection result
===================================

The nn_class object is returned by `net.search()`.

Constructors
------------

.. class:: nn.nn_class()

   Please call `net.search()` to create this object.

Methods
-------

.. method:: nn_class.rect()

   Returns a rectangle tuple (x, y, w, h) for use with `image` methods
   like `image.draw_rectangle()` of the nn_class's bounding box.

.. method:: nn_class.x()

   Returns the nn_class's bounding box x coordinate (int).

   You may also get this value doing ``[0]`` on the object.

.. method:: nn_class.y()

   Returns the nn_class's bounding box y coordinate (int).

   You may also get this value doing ``[1]`` on the object.

.. method:: nn_class.w()

   Returns the nn_class's bounding box w coordinate (int).

   You may also get this value doing ``[2]`` on the object.

.. method:: nn_class.h()

   Returns the nn_class's bounding box h coordinate (int).

   You may also get this value doing ``[3]`` on the object.

.. method:: nn_class.index()

   Returns the index of the nn class detection (int).

   You may also get this value doing ``[4]`` on the object.

.. method:: nn_class.value()

   Returns the value of the nn class detection (float).

   You may also get this value doing ``[5]`` on the object.

class Net -- Neural Network
===========================

Constructors
------------

.. class:: nn.load(path)

   Loads the neural network from a ``.network`` binary file into memory. The
   networks layers/weights/biases/etc. are stored on the MicroPython heap.

   Returns a ``Net`` object which can operate on an image.

Methods
-------

.. method:: net.forward(image, [roi, [softmax=False, [dry_run=False]]])

   Runs the network on an image roi (auto scaling if necessary) and returns a
   list of floating point values representing the classification results of the
   neural network.

   ``roi`` is the region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle. Only pixels within the
   ``roi`` are operated on.

   If ``softmax`` is True then the list of all outputs will sum to 1. Otherwise,
   any output in the list of outputs may be between 0 and 1.

   Set ``dry_run`` to True to print out which network layers are being executed
   instead of actually executing them. This is for debugging.

.. method:: net.search(image, [roi, [threshold=0.6, [min_scale=1.0, [scale_mul=0.5, [x_overlap=0, [y_overlap=0, [contrast_threshold=1, [softmax=False]]]]]]]])

   Runs the network on an image roi in a sliding window manner. The network
   detector window is slid across the image at multiple scales.

   Returns a list of `nn_class` objects representing the nn detections.

   ``roi`` is the region-of-interest rectangle tuple (x, y, w, h). If not
   specified, it is equal to the image rectangle. Only pixels within the
   ``roi`` are operated on.

   After running on an area in the image the first maximum detection over
   ``threshold`` is added to the output list.

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

   ``contrast_threshold`` controls a threshold for skipping low contrast
   regions of the image. Before the nn is run on an area in the image the
   standard deviation is calculated on that area and the area is skipped if
   the standard deviation falls below the ``contrast_threshold``.

   If ``softmax`` is True then the list of all outputs will sum to 1. Otherwise,
   any output in the list of outputs may be between 0 and 1.
