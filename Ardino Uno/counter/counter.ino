int count=0;

void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

int x = digitalRead(7);

if(x==1)
{
  
  count++;
  Serial.print("no of visitors =");
  Serial.println(count);
  delay(1000);
  }


}
