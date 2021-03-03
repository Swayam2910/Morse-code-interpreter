#include <string.h>
char letter [10]="\0";
char words[50]="\0";


const int Button_Pin1 = 13;
const int Button_Pin2 = 12;
const int Button_Pin3 = 11;
String Character[26] ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
String Alphabets[26]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","y","Z",};

void setup()
{
  pinMode(Button_Pin1,INPUT); 
  pinMode(Button_Pin2,INPUT); 
  pinMode(Button_Pin3,INPUT); 
  Serial.begin(9600);
}

void decode_morse()
{
  for (int i =0;i<26;i++)
  {
    if (Character[i]==letter)
    {
      const char *A = Alphabets[i].c_str();
      strncat(words,A,1);
      Serial.println(words);
      memset(&letter[0], 0, sizeof(letter)); //set the string back to zero
    
    }
  }
}


void loop()
{
  if (digitalRead(Button_Pin1)==HIGH)
  {
    Serial.print(".");
    strncat(letter,".",1);
    delay(200);
  }
  else if (digitalRead(Button_Pin2)==HIGH)
  {
    Serial.print("-");
    strncat(letter,"-",1);
    delay(200);
  }
  else if (digitalRead(Button_Pin3)==HIGH)
  {
    Serial.println(" ");
    delay(200);
    decode_morse();
  }
  Read_from_Serial();
}

