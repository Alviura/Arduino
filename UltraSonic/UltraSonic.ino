 #include <NewPing.h> 
 NewPing sonar(6,7, 50);
 int trig = 6;
 int echo = 7;
 int duration=0;
 int distance=0;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //delay(50);
  pinMode(echo, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("The distance is:");
  //Serial.println(sonar.ping_cm());
  delay(1000);
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW); 
  duration = pulseIn(echo, HIGH);
  distance = ((duration/2) /28.5);
  Serial.println(distance);

  if (distance <=7){
    digitalWrite (8, HIGH);

  }
  else {
    digitalWrite(8, LOW);
  }
  if (distance <=14){
    digitalWrite(9, HIGH);
  }
  else {
    digitalWrite(9, LOW);
  }
  if (distance <=21){
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(10, LOW);
  }
  if (distance <=28){
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(11, LOW);
  }
  if (distance <=35){
    digitalWrite(4, HIGH);
  }
  else {
    digitalWrite(4, LOW);
  }
  if (distance <=42){
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }
  if (distance <=49){
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }

}
