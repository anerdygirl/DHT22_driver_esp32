#include "dht22.h"


void setup() {
  Serial.begin(9600);
  beginDHT();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float h = readHumidity();
  float t = readTemperature('c');
  Serial.print("temp: ");
  Serial.println(t);
  Serial.print("humidity: ");
  Serial.println(h);
  exceptionDHT();
}
