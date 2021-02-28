const int buttonPin1 = 8;
const int buttonPin2=4;
const int ledPin = 13; 
void setup()

{
  pinMode(buttonPin1,INPUT); 
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin2,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(buttonPin1)==HIGH)
  {
    digitalWrite(ledPin,HIGH);
    Serial.println('.');
    delay(200);
  }
  else if (digitalRead(buttonPin2)==HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println('-');
    delay(200);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}