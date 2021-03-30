#include <Servo.h>
//int valu = 1000;
Servo ESC;

void setup(){
    //pinMode(9,OUTPUT);
    pinMode(13,OUTPUT);
    ESC.attach(9,1000,2000);// (Pin, min pulse width, max pulse width in microsecond)
    ESC.write(180); // Full throttle
    delay(5000);
    //ESC.write(0); // Full reverse
    //delay(3000);
    //ESC.write(95);
    //delay(1000); // Neutral position
}

void loop(){
    //valu = map(valu,938, 1937, 0, 180);
    ESC.write(0); // val between 0 and 180 
    digitalWrite(13, HIGH);
    delay(2000); // Time is very important in calibration 
    ESC.write(93);
    digitalWrite(13, LOW);
    delay(2000);
}
