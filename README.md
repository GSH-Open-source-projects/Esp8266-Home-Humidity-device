**This is a project for designing one Humidity control by Esp8266 MCU**

We are using the Arduino IDE so you need to add ESP8266 boot library to it by this instruction.


These project contain these parts:

 1. Temperature,Humidity, water level and ... Sensors part ( using HR202 or DHT11 & ... ) with ESP8266 MCU. 
 2.  Ultrasonic Power Driver.

 3. Power-supply for it.
 4. Designing one beautiful Plastic CAD or use the ordinary Traditional container like [this][1].

SO As we are doing on it we update this project.

For the first part of it i have tried the DHT11 sensor and RL202 sensor which the RL202  reading failed by this codes and the DHT11 try have been successful, by [this code][2] from [this][3] post by adding 200ms delay to the main loop function.:

![enter image description here][4]

by this kind of connections:

![enter image description here][5]

Also we have one [telegram group][6] for more communication about this project for our self.

Thanks for your attention.


  [1]: https://grabcad.com/library/148447
  [2]: https://github.com/GSH-Open-source-projects/Esp8266-Home-Humidity-device/blob/master/DHT_ESP8266/DHT_ESP8266.ino
  [3]: https://www.electronicwings.com/nodemcu/dht11-sensor-interfacing-with-nodemcu
  [4]: https://i.stack.imgur.com/QS8sh.png
  [5]: https://i.stack.imgur.com/kDTwT.png
  [6]: https://t.me/joinchat/CKfLihtRUUbOkM-mKniJww
