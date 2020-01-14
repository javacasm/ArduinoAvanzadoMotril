#include <SimpleDHT.h>

// Basado en el ejemplo DHT11Default de la la librería SimpleDHT

// DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
// Rele
//      VCC: 5V
//      GND: GND
//      S:  8
// Potenciometro
//      Pin derecho: 5V
//      Pin Centroal:  A0
//      Pin izquierdo: GND

int pinSensorDHT = 2;
int pinRele = 8;
int pinPotenciometro = A0

SimpleDHT11 sensorSalon(pinSensorDHT);

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

  int vPotenciometro = analogRead(pinPotenciometro);
  int temperatura = map(vPotenciometro,10,30,0,1023);
  Serial.print("temperatura objetivo:");
  Serial.println(temperatura);
  
  if(temperature < temperatura){
     digitalWrite(pinRele,HIGH);
  } else{
     digitalWrite(pinRele,LOW);
  }
  
  // DHT11 sampling rate is 1HZ.
  delay(1500);
}
