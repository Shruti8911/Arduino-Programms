int red = 13;
int yellow = 12;
int green = 11;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop(){
  //for red
digitalWrite(red, LOW);
digitalWrite(yellow, HIGH);
digitalWrite(green, HIGH);
delay(1000);//15 SEC
//for yellow
digitalWrite(red, HIGH);
digitalWrite(yellow, LOW);
digitalWrite(green, HIGH);
delay(1000);//1 SEC
//for green
digitalWrite(red, HIGH);
digitalWrite(yellow, HIGH);
digitalWrite(green, LOW);
delay(1000);//1 SEC
}
