#include <SimpleDHT.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int patillaSensorSalon = 2;
int pinRele = 8;
SimpleDHT11 sensorSalon(patillaSensorSalon);

void setup() {
  Serial.begin(115200);
  pinMode(pinRele,OUTPUT);
}

void loop() {
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  // read without samples.
  byte temperature = 0;
  byte humidity = 0;
  int err = sensorSalon.read(&temperature, &humidity, NULL);
  if (err != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err=");
    Serial.println(err);delay(1000);
  }  else   {
    Serial.print("Sample OK: ");
    Serial.print((int)temperature); Serial.print(" *C, "); 
    Serial.print((int)humidity); Serial.println(" H");
  }

  if(temperature < 17){
     digitalWrite(pinRele,HIGH);
  } else{
     digitalWrite(pinRele,LOW);
  }
  
  // DHT11 sampling rate is 1HZ.
  delay(1500);
}
