// MOTOR , WITH IR SENSOR INPUR TO WHEELS

// IR SENSOR / Blootooth control ::
// Wheel pins :::
// In1-6
// In2-7
// In3-4
// In4-5

// +Ve connection::::
// Cell +ve connect to switch and then connect
// Driver 12v to switch and then connect
// Arduino +ve connect with both

// -ve connection:::::
// -ve of cell 
// Gnd of driver
// -ve of Arduino both

// If sensor used then ::
// Gnd with gnd of Arduino
// Vcc 5v of Arduino
// Out pin to pin number 

void setup() 
{
  //FOR IR sensor input 
  pinMode(2,INPUT);
  
  pinMode(4,OUTPUT);// FOR 1 ST MOTOR to input3
  pinMode(5,OUTPUT);// FOR 1 ST MOTOR to input4
  pinMode(6,OUTPUT);// FOR 2 ND MOTOR to input1
  pinMode(7,OUTPUT);// FOR 2 ND MOTOR to input2
}

void loop() 
{
// FORWORD DIRECTION
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);

//if touch to ir sensor then off the rotation of wheels ok
if(digitalRead(2)==HIGH){
     //then switching off rotation motor- FORWORD
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
}else{  
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);//on
     digitalWrite(6,LOW);//on
     digitalWrite(7,HIGH);
     }
}