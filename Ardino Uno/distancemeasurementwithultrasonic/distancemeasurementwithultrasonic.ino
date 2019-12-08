const int trig = 7;
const int echo = 8;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:

pinMode(trig,OUTPUT);
pinMode(echo,INPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(7,HIGH);
delayMicroseconds(2);
digitalWrite(7,LOW);


duration = pulseIn(echo,HIGH);
distance = duration*0.017;
Serial.print(" Distance is ");
Serial.println(distance);

}
