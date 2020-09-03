/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// Pin 13 has an LED connected on most Arduino boards.

int led = 13;

// the setup routine runs once when you press reset
void setup() 
{  
// initialize the digital pin as an output.  
pinMode(led, OUTPUT);  
Serial.begin(9600);
}
int state = 0;
void loop() 
{  
if(Serial.available() > 0)  // Checks whether data is comming from the serial port  
{                         
state = Serial.read();  // Reads the data from the serial port  
}  
if (state == '0')  
{  digitalWrite(led, LOW); // Turn LED OFF 
} 
 if (state == '1')  
{  digitalWrite(led, HIGH); // Turn LED ON
}
}
