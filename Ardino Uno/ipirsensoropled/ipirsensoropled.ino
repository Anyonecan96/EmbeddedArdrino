void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int x = digitalRead(7);

if(x==1)
{
  digitalWrite(13,HIGH);
  delay(10000);
    }
else
{
  digitalWrite(13,LOW);
  delay(10);
  }
}
