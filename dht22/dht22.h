// need to download Adafruit DHT library first
#include <DHT.h>

#define DHTTYPE DHT22 

// init sensor
void beginDHT() {
  dht.begin();
}

// create an instance of your sensor in the setup function of your program: DHT dht(DHTPIN, DHT22);

// creates a sensor event to read data
sensors_event_t event;

// set up sensor pin
void setupDHT22(uint8 pin) {
  pinMode(pin, INPUT);
}

// read humidity
float readHumidity() {
  float h = dht.readHumidity();
  return h;
}

// read temperature
float readTemperature(char x) {
  // temperature read in °C
  float c = dht.readTemperature();
  // temperature read in °F
  float f = dht.readTemperature(true);
  // returns temperature according to unit selected
  if (toupper(x) == 'C') { //unit is Celcius
      return c;
  } else if (toupper(x) == 'F') { //unit is Fahrenheit
      return f;
  } else {
      Serial.println("Undefined unit...");
      return -1;
  }
}

// error handling
void exceptionDHT() {
  if (isnan(dht.readTemperature()) || isnan(dht.readTemperature(true)) || isnan(dht.readHumidity())) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
}
