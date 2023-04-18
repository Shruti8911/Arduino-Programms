// MOTOR , WITH IR SENSOR INPUR TO WHEELS

void setup() 
{
  //FOR IR sensor input 
  pinMode(2,INPUT);
  
  //LED intilizing here
  pinMode(4,OUTPUT);// FOR 1 ST MOTOR
  pinMode(5,OUTPUT);// FOR 1 ST MOTOR
  pinMode(6,OUTPUT);// FOR 2 ND MOTOR
  pinMode(7,OUTPUT);// FOR 2 ND MOTOR
}

void loop() 
{
// FORWORD DIRECTION
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);

//  REVERCE DIRECTION
//  digitalWrite(4,LOW);
//  digitalWrite(5,HIGH);
//  digitalWrite(6,HIGH);
//  digitalWrite(7,LOW);

//if touch to ir sensor then off the rotation of wheels ok
if(digitalRead(2)==LOW){
     //then switching off rotation motor- FORWORD
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
}else{  
     //otherwise continue ON the rotation of wheels in FORWORD direction
     digitalWrite(2,LOW);
     // FORWORD DIRECTION
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);//on
     digitalWrite(6,LOW);//on
     digitalWrite(7,HIGH);
     }
}
