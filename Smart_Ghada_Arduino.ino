/********************************************************************************
    Author : Hak Se Engineer
    Date   : 13/07/2024
    This sketch can work with ATtiny and Arduino UNO, MEGA, etc...
    This example code is in the public domain.
********************************************************************************/

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
#define SERVO_PIN         4
#define REFRESH_PERIOD_MS 20
#define NOW               1
#define IR 3

int pos = 0;    // variable to store the servo position 
int sense = 0;

void setup() 
{ 
  pinMode(IR, INPUT);
  myservo.attach(SERVO_PIN);  // attaches the servo on pin defined by SERVO_PIN to the servo object 
} 
 
 
void loop() 
{ 
  sense = digitalRead(IR);
  // check if object detected..
  if (sense == LOW) {
    pos =180;
  }
  else{
    pos =70;
  }
  myservo.write(pos);              // tell servo to go to position in variable 'pos' 
  delay(10);
} 
