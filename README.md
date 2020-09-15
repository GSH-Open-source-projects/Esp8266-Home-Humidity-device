**This is a project for designing one Humidity control by Esp8266 MCU**

We are using the Arduino IDE so you need to add ESP8266 boot library to it by [this][1] instruction.


These project contain these parts:

 1. Temperature,Humidity, water level and ... Sensors part ( using HR202 or DHT11 & ... ) with ESP8266 MCU. 
 2.  Ultrasonic Power Driver.

 3. Power-supply for it.
 4. Designing one beautiful Plastic CAD or use the ordinary Traditional container like [this][2].

So as we are doing working on it, we would update the GitHub Repo of this project.

For the first part of it i have tried the DHT11 sensor and RL202 sensor which the RL202  reading failed by this codes and the DHT11 try have been successful, by [this code][3] from [this][4] post by adding 200ms delay to the main loop function.:

![enter image description here][5]

by this kind of connections and needs to add [the DHT11 Lib][6] zip file to Arduino library by [This][7] instruction, also you can check other DHT11 ESPxx base library like [this][8] lib ( which i don't know why don't working with my DHT11 module?!):

![enter image description here][9]

Also we have one [telegram group][10] for more communication about this project for our self.

**Thanks for your attention.**


  [1]: https://www.youtube.com/watch?v=OC9wYhv6juM
  [2]: https://grabcad.com/library/148447
  [3]: https://github.com/GSH-Open-source-projects/Esp8266-Home-Humidity-device/blob/master/DHT_ESP8266/DHT_ESP8266.ino
  [4]: https://www.electronicwings.com/nodemcu/dht11-sensor-interfacing-with-nodemcu
  [5]: https://i.stack.imgur.com/QS8sh.png
  [6]: https://github.com/markruys/arduino-DHT/archive/master.zip
  [7]: https://www.youtube.com/watch?v=jMSic83Prs8
  [8]: https://github.com/beegee-tokyo/DHTesp/blob/master/examples/DHT_ESP8266/DHT_ESP8266.ino
  [9]: https://i.stack.imgur.com/kDTwT.png
  [10]: https://t.me/joinchat/CKfLihtRUUbOkM-mKniJww
