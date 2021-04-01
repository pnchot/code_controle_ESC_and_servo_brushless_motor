#include <Servo.h>
//int valu = 1000;
Servo ESC;
void ESC_calibration();

void setup(){
    pinMode(13,OUTPUT);
    ESC.attach(9,1000,2000);// (Pin, min pulse width, max pulse width in microsecond)
    ESC_calibration();
}

void loop(){

}

void ESC_calibration(){
    // delay between commands are very important in calibration function  
    ESC.write(180); // Green led is blinking waiting for Full throttle 
    delay(5000);
    ESC.write(0); // Red led is blinking waiting for Full reverse
    delay(5000);  
    ESC.write(93);// Yelow led is blinking waiting for Neutral position
    delay(5000);
};

