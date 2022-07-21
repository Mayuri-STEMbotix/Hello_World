#include <ESP8266WiFi.h>

#include "DHT.h"

#define DHTTYPE DHT11
#define dht_dpin D4
DHT dht(dht_dpin, DHTTYPE); 

char auth[] = "Your Auth Code";
char ssid[] = "Your WiFI";
char pass[] = "Your Wifi Password";
float t;
float h;

void setup()
{
    Serial.begin(9600);

    dht.begin();

}

void loop()
{
    float h = dht.readHumidity();
  float t = dht.readTemperature(); 
  Serial.println("Humidity and temperature\n\n");
  Serial.print("Current humidity = ");
  Serial.println(h);
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.println(t);
  delay(1000);

}
