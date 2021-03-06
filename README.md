**This is a project for designing one Humidity control by [**Esp8266 MCU**][1]**

We are using the Arduino IDE so you need to add **ESP8266** board library to it by [this][2] instruction.


These project contain these parts:

 1. Temperature,Humidity, water level and ... Sensors part ( using **HR202L**, **DHT11** & ... ) with **ESP8266** **MCU**. 
 2.  Ultrasonic Power Driver, like described here:
![enter image description here][3]

 3. Power-supply for it.
 4. Designing one beautiful Plastic CAD or use the ordinary Traditional container like [this][4] kind of device!:
![enter image description here][5]

5-Exporting the data to web server (like [described here][6] post).

So as we are gonna working on it, we would update the GitHub Repo of this project.

Now we describe the above parts.

# 1-Sensors Parts:

For the first part of it i have tried the **DHT11** sensor and **HR202L** sensor which the **HR202L**  reading failed by this code and the **DHT11** try have been successful, by [this code][7] from [this][8] post by adding 200 ms delay to the main loop function.:

![enter image description here][9]

By this kind of connections and needs to add [the **DHT11** Lib][10] zip file to Arduino library by [This][11] instruction, also you can check other **DHT11** **ESPxx** base library like [this][12] lib (which i **don't know** why **not working**, with my **DHT11** module?!):

![enter image description here][13]

# **2-Ultrasonic Power Driver:**

We can use some IRFXX Mosfet connected with one [bjt transistor][14] and for decreasing switching effect on MCU by using the [optocoupler][15] connected to Micro-controller IC ( ESP8266 or ...) , which could give us different frequency as we needs like described here:
![enter image description here][16]
or we can use some 555 Timer IC to create the 103KHZ frequency and trigger the Mosfet with it like described [here][17]:
![enter image description here][18]

And [this](http://ww1.microchip.com/downloads/en/AppNotes/00002265B.pdf) good paper for building it :
![enter image description here](https://i.stack.imgur.com/RJ57u.png)
![enter image description here](https://i.stack.imgur.com/16et5.png)

Also for more Voltage you can use boost converter series connections like [this](https://bornaelec.com/dc_dc_appnote_2):

![enter image description here](https://i.stack.imgur.com/OPg4z.png)

Also [one try to build the schematic part](https://easyeda.com/editor#id=%7C2e676d3ad4054bb1b27371c78cef4b28%7C7e04ee07ec1f4f54b8a50234d82a4bc1) of power supply:

![enter image description here](https://i.stack.imgur.com/2EVXT.png)

Also asked here for some concerns here:

![enter image description here](https://i.stack.imgur.com/UzTZj.png)


...


# 5- Sending data to web-serers:

[This post][6] could be used for asynchronous web server which is better that typical httpwebserver connection.

Also can use Node-RED for better graphical web-page designing as described [here][19], and [here][20]:


**To DO:** 

Wrting the 3th, 4th and 5th parts of its.

Also, This project could be seen here:

https://medium.com/@elasa2next/this-is-a-project-for-designing-one-humidity-control-by-esp8266-mcu-1199b03a9a5e?sk=ab9c88a848b976f0a30bfb9956c2d3b7

Also we have one [telegram group][21] for more communication about this project for ourselves.

**Thanks for your attention.**


  [1]: https://en.wikipedia.org/wiki/ESP8266
  [2]: https://www.youtube.com/watch?v=OC9wYhv6juM
  [3]: https://i.stack.imgur.com/nYkRG.jpg
  [4]: https://grabcad.com/library/148447
  [5]: https://i.stack.imgur.com/6n5cR.jpg
  [6]: https://randomnerdtutorials.com/esp8266-dht11dht22-temperature-and-humidity-web-server-with-arduino-ide/
  [7]: https://github.com/GSH-Open-source-projects/Esp8266-Home-Humidity-device/blob/master/DHT_ESP8266/DHT_ESP8266.ino
  [8]: https://www.electronicwings.com/nodemcu/dht11-sensor-interfacing-with-nodemcu
  [9]: https://i.stack.imgur.com/QS8sh.png
  [10]: https://github.com/markruys/arduino-DHT/archive/master.zip
  [11]: https://www.youtube.com/watch?v=jMSic83Prs8
  [12]: https://github.com/beegee-tokyo/DHTesp/blob/master/examples/DHT_ESP8266/DHT_ESP8266.ino
  [13]: https://i.stack.imgur.com/kDTwT.png
  [14]: https://en.wikipedia.org/wiki/Bipolar_junction_transistor
  [15]: https://en.wikipedia.org/wiki/Opto-isolator
  [16]: https://i.stack.imgur.com/uox8i.jpg
  [17]: https://www.instructables.com/id/Make-Your-Own-Super-Simple-Ultrasonic-Mist-Maker/
  [18]: https://i.stack.imgur.com/jsKph.png
  [19]: https://medium.com/@varuldcube100/display-temperature-and-humidity-sensor-data-in-node-red-dashboard-using-esp8266-and-mqtt-node-da8b49cdc33b
  [20]: https://medium.com/@rjrajbir24/iot-long-range-temperature-and-humidity-sensor-using-node-red-dde2fa23929a
  [21]: https://t.me/joinchat/CKfLihtRUUbOkM-mKniJww
