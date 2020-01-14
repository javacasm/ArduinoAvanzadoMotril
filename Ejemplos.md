# Ejemplos

## Termostado con sensor DHT11

Instalamos la librería SimleDHT (desde el gestor de librerías) y a partir del Ejemplo DHT11Defautl creamos un termostado que activará un relé conectado al pin 8

![Montaje DHT11 con rele](https://github.com/javacasm/ScratchArduinoMotril/raw/master/imagenes/DHT11ReleUno_bb.png)

[Ejemplo con arduino](https://github.com/javacasm/ArduinoAvanzadoMotril/blob/master/codigo/TermostatoDHT11/TermostatoDHT11.ino)

[Ejemplo con arduinoblocks](https://github.com/javacasm/ScratchArduinoMotril/blob/master/arduinoBlocks.md#midiendo-calculando-controlando)

## LCD I2C

[Hello World](https://github.com/javacasm/ArduinoAvanzadoMotril/blob/master/codigo/LCDHelloWorld/LCDHelloWorld.ino)

```C++
/*
* ESP8266 with 16x2 I2C LCD
* Compatible with the Arduino IDE 1.6.6
* A fork from https://github.com/agnunez/ESP8266-I2C-LCD1602

www.hobbytronics.com.pk
https://blog.hobbytronics.com.pk
*/

#include <Wire.h>
#include <LiquidCrystal_I2C_ESP.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C_ESP lcd(0x3F, 16, 2);

void setup()
{
// initialize the LCD
lcd.begin(21,22);  // sda=21 ,  scl=22

// Turn on the blacklight and print a message.
lcd.backlight();
lcd.print("Hola, mundo!");
}

void loop()
{
    // Do nothing here...
}
```

[Librería](https://github.com/javacasm/ArduinoAvanzadoMotril/blob/master/codigo/ESP8266-I2C-LCD1602.zip)
