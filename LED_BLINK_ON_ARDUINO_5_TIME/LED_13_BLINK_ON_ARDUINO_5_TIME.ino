// FIVE TIME BLIK USING LOOP
void setup() 
{
  // pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  fun();//call the functionm
}
void loop() {
  
}
void fun(){
  for(int i=0; i<5; i++){
    digitalWrite(13, HIGH);//OFF LED
    delay(500);
    digitalWrite(13, LOW);//ON LED
    delay(500);
  }
  // digitalWrite(12, HIGH);//complete off
}