

void setup(){
  pinMode(13, OUTPUT);//led
  pinMode(12, OUTPUT); //Buzzer
  blinkfun();//call the fun
}

void loop(){

}

void blinkfun(){
for(int i=0; i<1; i++){
    digitalWrite(13, HIGH);//OFF LED
    digitalWrite(12, HIGH);//OFF LED?    
    delay(2500);
    digitalWrite(13, LOW);//ON LED
    digitalWrite(12, LOW);//OFF LED
    delay(2500);
  }
  for(int i=0; i<2; i++){
    digitalWrite(13, HIGH);//OFF LED
    digitalWrite(12, HIGH);//OFF LED?    
    delay(800);
    digitalWrite(13, LOW);//ON LED
    digitalWrite(12, LOW);//OFF LED
    delay(800);
  }
  for(int i=0; i<3; i++){
    digitalWrite(13, HIGH);//OFF LED
    digitalWrite(12, HIGH);//OFF LED?    
    delay(200);
    digitalWrite(13, LOW);//ON LED
    digitalWrite(12, LOW);//OFF LED
    delay(200);
  }
}

