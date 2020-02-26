:mod:`time` --- tracking elapsed time
=====================================

.. module:: time
   :synopsis: tracking elapsed time

The ``time`` module is used for tracking elapsed time. ``import utime`` for the
standard python time module.

Functions
---------

.. function:: time.ticks()

   Returns the elapsed milliseconds since power on.

   .. note::

      Use the :func:`pyb.millis()` instead of this function.

.. function:: time.sleep(ms)

   Sleeps for ``ms`` number of milliseconds.

   .. note::

      Use the :func:`pyb.delay()` instead of this function.

Constructors
------------

.. class:: time.clock()

   Returns a clock object.

Methods
-------

.. method:: clock.tick()

   Starts tracking elapsed time.

.. method:: clock.fps()

   Stops tracking the elapsed time and returns the current FPS
   (frames per second).

   Always call ``tick`` first before calling this function.

.. method:: clock.avg()

   Stops tracking the elapsed time and returns the current average elapsed time
   in milliseconds.

   Always call ``tick`` first before calling this function.

.. method:: clock.reset()

   Resets the clock object.
