#include <Mouse.h>

  // BLUETHOOTH SC05 PROGRAM- Direction of left right forword backword directions 

  int state = 0;
  void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.begin(9600); // Default communication rate of the Bluetooth module
  }
  void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
  }
  if (state == 'f') {
  //THEN FORWARED DIRECTION ROTATES
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  }else if (state == 'b') {
  //THEN REVERCE/BACKWORD DIRECTION ROTATES
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  }else if (state == 'l') {
  //THEN LEFT DIRECTION ROTATES
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  }else if (state == 'r') {
  //THEN RIGHT DIRECTION ROTATES
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  }else {
  //OTHERWISE OFFF THE ROTATION OF MOTOR
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
     }
}
