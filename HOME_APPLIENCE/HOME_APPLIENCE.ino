// HOME APPLIENCE THROUGH VOICE COMMAND AND RELAY CONNECTIION

char sms;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(serial.available() != 0){
    sms.serial.read();
  }
  if(sms==0){
    digitalWrite(8, LOW);
  }else{
    digitalWrite(8, HIGH);
  }
}
