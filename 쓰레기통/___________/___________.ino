const int trigpin=4;
const int echopin=2;


void setup() {
 Serial.begin(9600);

 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT); 
}

void loop() {
  digitalWrite(tirgPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

   long distance=pulseIn(echoPin,HIGH) / 58;

   Serial.println(distance+"CM");

   delay(100);
}
