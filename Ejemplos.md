# Ejemplos

## Lectura de sensor DHT11

Empezamos usando el sensor de temperatura y humedad atomosférica DHT11

¿Cómo es que podemos usar esos sensores? : Librerías: conjunto de código empaquetado

Ejemplo: [lcd](http://arduino.cc/en/pmwiki.php?n=Reference/LiquidCrystal) o [servo](http://arduino.cc/en/pmwiki.php?n=Reference/Servo)

### Para incluir una librería en código hacemos

	#include <Libreria.h>


Instalamos la librería **SimpleDHT** (Programa->Librerías->Gestor de librerías)

Las librerías además del código suelen traer ejemplos

Abrimos el ejemplo **DHT11Default** y conectamos el sensor DHT al pin 2

![Montaje DHT11](./images/DHHT11Uno_bb.png)

Los datos de temperatura y humedad se envían por el puerto USB al PC

# Envío de datos serie

### La comunicación serie se produce via USB entre Arduino y el PC

* Detectamos el puerto
* Necesitamos un programa para ver los datos, podemos usar el **Monitor Serie** incluído en el IDE de Arduino (Herramientas->Monitor Serie o el botón de la lupa arriba a la derecha)
* Configuramos la velocidad (en este ejemplo 115200)

## Termostado con sensor DHT11

Instalamos la librería SimleDHT (desde el gestor de librerías) y a partir del Ejemplo DHT11Defautl creamos un termostado que activará un relé conectado al pin 8

![Montaje DHT11 con rele](./images/DHT11ReleUno_bb.png)

[Ejemplo con C++](https://github.com/javacasm/ArduinoAvanzadoMotril/blob/master/codigo/TermostatoDHT11/TermostatoDHT11.ino)

[Ejemplo con arduinoblocks](https://github.com/javacasm/ScratchArduinoMotril/blob/master/arduinoBlocks.md#midiendo-calculando-controlando)

# Lectura de datos analógicos

## Potenciómetro: resistencia variable (mando de volumen)

### Se leen valores enteros entre 0 y 1023
### Equivalen a los valores de 0V y 5V

![mapeotiempos](./images/DHT11Rele3RegulableUno_bb.png)


Vamos a utilizar nuestro potenciómetro para seleccionar la temperatura objetivo

En muchas ocasiones necesitamos hacer la transformación al rango que a nosotros nos interesa. Para simplificarlo usamos la función matemática **map**

Convertiremos (mapearemos) la medida de entre 0 y 1023 a una temperatura entre 10º y 30º 


[Programa C++]()
[Programa ArduinoBlocks](http://www.arduinoblocks.com/web/project/192734)


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
