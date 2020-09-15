**This is a project for designing one Humidity control by [**Esp8266 MCU**][1]**

We are using the Arduino IDE so you need to add **ESP8266** board library to it by [this][2] instruction.


These project contain these parts:

 1. Temperature,Humidity, water level and ... Sensors part ( using **HR202L**, **DHT11** & ... ) with **ESP8266** **MCU**. 
 2.  Ultrasonic Power Driver.

 3. Power-supply for it.
 4. Designing one beautiful Plastic CAD or use the ordinary Traditional container like [this][3] kind of device!:

![enter image description here][4]

So as we are gonna working on it, we would update the GitHub Repo of this project.

For the first part of it i have tried the **DHT11** sensor and **HR202L** sensor which the **HR202L**  reading failed by this code and the **DHT11** try have been successful, by [this code][5] from [this][6] post by adding 200 ms delay to the main loop function.:

![enter image description here][7]

by this kind of connections and needs to add [the **DHT11** Lib][8] zip file to Arduino library by [This][9] instruction, also you can check other **DHT11** **ESPxx** base library like [this][10] lib ( which i don't know why don't work with my **DHT11** module?!):

![enter image description here][11]

Also we have one [telegram group][12] for more communication about this project for ourselves.

**Thanks for your attention.**


  [1]: https://en.wikipedia.org/wiki/ESP8266
  [2]: https://www.youtube.com/watch?v=OC9wYhv6juM
  [3]: https://grabcad.com/library/148447
  [4]: https://i.stack.imgur.com/WaqOM.png
  [5]: https://github.com/GSH-Open-source-projects/Esp8266-Home-Humidity-device/blob/master/DHT_ESP8266/DHT_ESP8266.ino
  [6]: https://www.electronicwings.com/nodemcu/dht11-sensor-interfacing-with-nodemcu
  [7]: https://i.stack.imgur.com/QS8sh.png
  [8]: https://github.com/markruys/arduino-DHT/archive/master.zip
  [9]: https://www.youtube.com/watch?v=jMSic83Prs8
  [10]: https://github.com/beegee-tokyo/DHTesp/blob/master/examples/DHT_ESP8266/DHT_ESP8266.ino
  [11]: https://i.stack.imgur.com/kDTwT.png
  [12]: https://t.me/joinchat/CKfLihtRUUbOkM-mKniJww
