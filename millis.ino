int buttonPin = 8;                 
int ledPin = 13; 
unsigned long length,t1,t2; 
void setup()

{
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  while (digitalRead(buttonPin) == HIGH) {}
  t1 = millis();                          
  digitalWrite(ledPin, HIGH);               
  while (digitalRead(buttonPin) == LOW) {}
  t2 = millis();                        
  digitalWrite(ledPin, LOW);                
  length = t2 - t1;                    
  Serial.print(length);
  Serial.print("\n");
}
