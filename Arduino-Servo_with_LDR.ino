#include <Servo.h>     // Library for Servo Motor

int potpin= A0;// initialize analog pin 0, connected with photovaristor


int val=0;// initialize variable val

Servo myServo;   // define servo name

 

/* The setup() function is called when a sketch starts. It is used to initialize variables, pin modes, start using libraries, etc. This function will only run once, after each power up or reset of the Arduino board. */

 

void setup()

{


Serial.begin(9600);   // set baud rate at “9600”

myServo.attach(D1);   // servo pin


}

 

/* The loop() function executes the program repeatedly until Specified. */

 

void loop()

{

val=analogRead(potpin);// read the analog value of the sensor and assign it to val

Serial.println(val);// display the value of val

//analogWrite(ledpin,val);// turn on the LED and set up brightness（maximum output value 255）

delay(10);// wait for 0.01

if(val <= 250)
{

   myServo.write(180); 

}

else


{

   myServo.write(0);

}
}
