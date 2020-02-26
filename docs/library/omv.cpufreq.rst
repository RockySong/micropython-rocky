:mod:`cpufreq` --- CPU Frequency Control
========================================

.. module:: cpufreq
   :synopsis: CPU Frequency Control

The ``cpufreq`` module is used to get/set the CPU frequency to save power.

.. note::

   This module is not supported on the OpenMV Cam M4 because the CPU frequency,
   for various reasons, cannot be set independently of peripherals.

Functions
---------

.. function:: cpufreq.set_frequency(supported_frequency)

   Sets the CPU frequency to a supported frequency in mhz. Peripherals
   frequencies are not changed. Only the CPU performance.

.. function:: cpufreq.get_current_frequencies()

   Returns (cpu_clk_in_mhz, hclk_in_mhz, pclk1_in_mhz, pclk2_in_mhz).

.. function:: cpufreq.get_supported_frequencies()

   Returns the supported CPU frequencies [120, 144, 168, 192, 216] on the
   OpenMV Cam M7 and [120, 240, 480] on the OpenMV Cam H7 in mhz.
