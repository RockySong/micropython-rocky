.. currentmodule:: network
.. _network.WINC:

class WINC -- wifi shield driver
================================

The ``WINC`` class is used for controlling the wifi shield.

Example usage::

    import network

    wlan = network.WINC()
    wlan.connect("SSID", "KEY")

    wlan.ifconfig()

Constructors
------------

.. class:: WINC([mode=MODE_STATION])

   Creates a winc driver object and connects to the wifi shield which uses
   I/O pins P0, P1, P2, P3, P6, P7, and P8.

   ``mode`` controls the mode the WINC module works in:

     * network.WINC.MODE_STATION

       The module connects to an access point as a client. This is the default mode.

     * network.WINC.MODE_AP

       The module will create an AP (Access Point) and accept connections from a client.

       .. note::

          The start_ap() method must be called after setting AP mode to configure the AP.

          Also, the WINC1500 has some limitations in its AP implementation:

             * Only one client can connect at a time.
             * Only OPEN or WEP security are supported.
             * There's a bug in the WiFi Module FW, when the client disconnects any bound sockets are lost (they just stop working). As a workaround, set a timeout for the server socket to force it to raise an exception and then reopen it (See the example script).

     * network.WINC.MODE_FIRMWARE:

       This mode enables WiFi module firmware update.

Methods
-------

.. method:: WINC.connect(ssid, [key=None, [security=WPA_PSK]])

   Connect to a wifi network with ssid ``ssid`` using key ``key`` with
   security ``security``.

   After connecting to the network use the :mod:`usocket` module to open TCP/UDP
   ports to send and receive data.

   .. note::

      This method takes a little while to return.

.. method:: WINC.start_ap(ssid, [key=None, [security=OPEN, [channel=1]]])

   When running in AP mode this method must be called after creating
   a WINC object to configure and start the AP .

     * ssid: The AP SSID (must be set).
     * key: The AP encryption key. A Key is required only if security is WEP.
     * security: AP security mode (only OPEN or WEP are supported).
     * channel: WiFi channel, change this if you have another AP running at the same channel.

.. method:: WINC.disconnect()

   Disconnect from the wifi network.

.. method:: WINC.isconnected()

   Returns True if connected to an access point and an IP address has been
   obtained.

.. method:: WINC.connected_sta()

   This method returns a list containing the connected client's IP adress.

.. method:: WINC.wait_for_sta(timeout)

   This method blocks and waits for a client to connect. If timeout is 0
   this will block forever. This method returns a list containing the
   connected client's IP adress.

.. method:: WINC.ifconfig([ip_addr, subnet_addr, gateway_addr, dns_addr])

   Returns a tuple containing:

      * [0]: IP Address String (XXX.XXX.XXX.XXX)
      * [1]: Subnet Address String (XXX.XXX.XXX.XXX)
      * [2]: Gateway String (XXX.XXX.XXX.XXX)
      * [3]: DNS Address String (XXX.XXX.XXX.XXX)

   While connected to the network.

   You may optionally pass a tuple/list of the ip_addr, subnet_addr,
   gateway_addr, and dns_addr strings in ipv4 (XXX.XXX.XXX.XXX) format
   to set a static IP address versus an address obtained through DHCP (which happens by default).

   Example usage::

       wlan = network.WINC()
       wlan.ifconfig(('192.168.1.100', '255.255.255.0', '192.168.1.1', '192.168.1.1'))
       wlan.connect(SSID, key=KEY, security=wlan.WPA_PSK)

.. method: WINC.netinfo()

   Returns a tuple containing:

      * [0]: RSSI - received signal strength indicator (int)
      * [1]: Authorization Type (see constants)
      * [2]: Set Service Identifier String (SSID)
      * [3]: MAC Address String (XX:XX:XX:XX:XX:XX) (BSSID)
      * [4]: IP Address String (XXX.XXX.XXX.XXX)

   While connected to the network.

.. method:: WINC.scan()

   Returns a list containing:

      * [0]: Channel Number (int)
      * [1]: RSSI - received signal strength indicator (int)
      * [2]: Authorization Type (see constants)
      * [3]: MAC Address String (XX:XX:XX:XX:XX:XX) (BSSID)
      * [4]: Set Service Identifier String (SSID)

   You don't need to be connected to call this.

.. method:: WINC.rssi()

   Returns the received signal strength indicator (int) of the currently
   connected network.

.. method:: WINC.fw_version()

   Returns a tuple containing the wifi shield firmware version number.

      * [0]: Firmware Major Version Number (int)
      * [1]: Firmware Minor Version Number (int)
      * [2]: Firmware Patch Version Number (int)
      * [3]: Driver Major Version Number (int)
      * [4]: Driver Minor Version Number (int)
      * [5]: Driver Patch Version Number (int)
      * [6]: Hardware Revision Number - Chip ID (int)

.. method:: WINC.fw_dump(path)

   Dumps the wifi shield firmware to a binary file at ``path``. You must
   have put the module into firmware mode to use this.

.. method:: WINC.fw_update(path)

   Programs the wifi shield with binary image found at ``path``. You must
   have put the module into firmware mode to use this.

Constants
---------

.. data:: WINC.OPEN

   For connecting to an open wifi network.

.. data:: WINC.WEP

   For connecting to a WEP based password protected network.

.. data:: WINC.WPA_PSK

   For connecting to a WPA/PSK based password protected network.

.. data:: WINC.MODE_STA

   Start in station mode (i.e. connect to a network).

.. data:: WINC.MODE_AP

   Start in access point mode (i.e. become the network).

.. data:: WINC.MODE_FIRMWARE

   Setup in firmware update mode.
