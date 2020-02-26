:mod:`omv` --- OpenMV Cam Information
=====================================

.. module:: omv
   :synopsis: OpenMV Cam Information

The ``omv`` module is used to get OpenMV Cam information.

Functions
---------

.. function:: omv.version_major()

   Returns the major version number (int).

.. function:: omv.version_minor()

   Returns the minor version number (int).

.. function:: omv.version_patch()

   Returns the patch version number (int).

.. function:: omv.version_string()

   Returns the version string (e.g. "2.8.0").

.. function:: omv.arch()

   Returns the board architecture string. This string is really just meant for
   OpenMV IDE but you can get it with this function.

.. function:: omv.board_type()

   Returns the board type string. This string is really just meant for
   OpenMV IDE but you can get it with this function.

.. function:: omv.board_id()

   Returns the board id string. This string is really just meant for
   OpenMV IDE but you can get it with this function.
