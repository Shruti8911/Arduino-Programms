
// TWO LED's BLINK ON OFF PROGRAME

void setup() 
{ 
  Serial.begin(9600); //serial communiaction ldr send data to arduino amd then send data to lappi
                      //FOR LDR sensor input 
  pinMode(10,INPUT);//FOR LDR SENSER
                    //LED intilizing here
  pinMode(13,OUTPUT);// FOR LED1
  pinMode(12,OUTPUT);// FOR LED2
  pinMode(11,OUTPUT);// FOR BUZZER
}
void loop() 
{//OFF LIGH AND BUZZER
if(digitalRead(10)==LOW){
 digitalWrite(13,LOW);  //LED 1
 digitalWrite(12,HIGH); //LED 2
 digitalWrite(11,LOW);  //BUZZER
}
else{  
 digitalWrite(13,HIGH);//1 LED
 digitalWrite(12,LOW); //2 LED
 digitalWrite(11,HIGH); //3BUZZER
 }
  // digitalWrite(11,HIGH); // BUZZER
}
