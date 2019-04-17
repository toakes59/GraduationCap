#include <Servo.h>

const int buttonPin = 4;
const int servoPin = 7;
const int buzzerPin = 8;

void setup() {
  // put your setup code here, to run once:
  servo.attach(servoPin);

  pinMode(buttonPin, INPUT)
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if(buttonState == HIGH){

    
    
    /*servo.write(20);
    servo.write(30);
    servo.write(40);
    servo.write(50);
    servo.write(60);
    servo.write(70);
    servo.write(80);
    servo.write(90);
    servo.write(100);
    servo.write(110);
    servo.write(120);
    servo.write(130);
    servo.write(140);
    servo.write(150);
    servo.write(160);
    servo.write(170);
    servo.write(180);//Ending Position*/
    
  }
}
