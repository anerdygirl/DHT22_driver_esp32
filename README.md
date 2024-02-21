# DHT22_driver_esp32

This is a custom "driver" library for Arduino IDE for DHT22 sensor... although to be fair I merely just "reformatted" the existing funcions in the Adafruit library.

dht22.ino is a "main" program to test the functions in dht22.h

dht22.h contains the functions + an instance of the DHT22 sensor (DHT dht(27, DHT22))

void beginDHT(): initializes the sensor

float readHumidity(): reads humidity

float readTemperature(char x): reads temperature and output the value based on the input unit x: C for Celcius and F for Fahrenheit

void exceptionDHT(): checks if the sensor is reading values
