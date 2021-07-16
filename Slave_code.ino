

void setup()
{
  Serial.begin(9600); //Serial com between two arduino will begin at a baud speed 9600
  pinMode(13, OUTPUT);
}

void loop()
{
  if(Serial.read() == '5'){
    digitalWrite(13,HIGH);} // after the signal is recived send high to the led or any object in this slave arduino
 
  
  }
