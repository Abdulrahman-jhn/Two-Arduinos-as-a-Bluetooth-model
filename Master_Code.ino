
void setup() {
  Serial.begin (9600); //Serila com between two arduino will begin at a baud speed 9600
  pinMode(12, OUTPUT); //trigger pin
  pinMode(11, INPUT);  //echo pin
}

void loop() {
  // Ultra sonic sensor configuration
  float duration, distance;
  digitalWrite(12, LOW); 
  delayMicroseconds(2);
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
  duration = pulseIn(11, HIGH);
  distance = (duration / 2) * 0.0344 ;
  delay(3000); // wait 3 second for reading
  
  if (distance >= 7 && distance <= 14){ // if the distance of the nearist object is between 7 and 14 cm
    Serial.write('5'); } // send to the other arduino a signal
  
  delay(250);
}
