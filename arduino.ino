#define ledVermelho 12
#define ledAmarelo 11

void setup() 
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{ 
  if(Serial.available() > 0)
  {
    switch(Serial.read())
    {
      case 'A':
      {
        digitalWrite(ledVermelho, HIGH);
      }
      break;

      case'B':
      {
        digitalWrite(ledVermelho, LOW);
      }
      break;

      case'C':
      {
        digitalWrite(ledAmarelo, HIGH);
      }
      break;

      case'D':
      {
        digitalWrite(ledAmarelo, LOW);
      }
      break;

    }
  }
  
}
