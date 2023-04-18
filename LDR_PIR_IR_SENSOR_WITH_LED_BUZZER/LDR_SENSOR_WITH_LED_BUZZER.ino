
// THREE PINS LDR WITH LED , BUZZER
void setup() 
{ 
  Serial.begin(9600); //serial communiaction ldr send data to arduino amd then send data to lappi
  //FOR LDR sensor input 
  pinMode(11,INPUT);//FOR LDR SENSER
  //LED intilizing here
  pinMode(13,OUTPUT);// FOR LED
  pinMode(12,OUTPUT);// FOR BUZZER
}
void loop() 
{//OFF LIGH AND BUZZER
if(digitalRead(11)==LOW){
 digitalWrite(13,LOW);
 digitalWrite(12,LOW);  
}
else{  
 digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 }
}
