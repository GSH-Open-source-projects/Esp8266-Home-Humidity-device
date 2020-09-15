#include "DHT.h"

DHT dht;
#define sensorPin A0

void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println("Status\tHumidity (%)\tTemperature (C)\t(F)");
  dht.setup(D4);   /* D۴ is used for data communication */
}

void loop()
{

//   sensorValue = analogRead(sensorPin);
//
//  // apply the calibration to the sensor reading
//  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);
//
//  // in case the sensor value is outside the range seen during calibration
//  sensorValue = constrain(sensorValue, 0, 255);

  
  
  delay(dht.getMinimumSamplingPeriod()); /* Delay of amount equal to sampling period */
  float humidity = dht.getHumidity();/* Get humidity value */
  float temperature = dht.getTemperature();/* Get temperature value */
  Serial.print(dht.getStatusString());/* Print status of communication */
  Serial.print("\t");
  Serial.print(humidity, 1);
  Serial.print("\t\t");
  Serial.print(temperature, 1);
  Serial.print("\t\t");
  Serial.println(dht.toFahrenheit(temperature), 1);/* Convert temperature to Fahrenheit units */
delay(200);
}
