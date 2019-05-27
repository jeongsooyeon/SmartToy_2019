#include <SoftwareSerial.h>
 
SoftwareSerial BTSerial(4, 5);
 
int in1 = 9;
int in2 = 6;
int in3 = 10;
int in4 = 11;

//직진
int RSpeed = 145;
int LSpeed = 149;

//회전
int RSpeed2 = 90;
int LSpeed2 = 90;

//후진
int RSpeed3 = 130;
int LSpeed3 = 148;


 
char data;
 
void setup() {
  BTSerial.begin(9600);
}
 
void loop() {
  if (BTSerial.available()) {
    data = BTSerial.read();
 
    if (data == 'f') { //직진
      analogWrite(in1, 0);
      analogWrite(in2, RSpeed);
      analogWrite(in3, LSpeed);
      analogWrite(in4, 0); 
    }
    if (data == 'r') { //우회전
      analogWrite(in1, 0);
      analogWrite(in2, RSpeed2);
      analogWrite(in3, LSpeed);
      analogWrite(in4, 0);
    }
    if (data == 'l') { //좌회전
      analogWrite(in1, 0);
      analogWrite(in2, RSpeed);
      analogWrite(in3, LSpeed2);
      analogWrite(in4, 0);
    }
    if (data == 'b') { //후진
      analogWrite(in1, RSpeed3);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, LSpeed3);
    }
    if (data == 's') { //정지
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
    }
  }
}
