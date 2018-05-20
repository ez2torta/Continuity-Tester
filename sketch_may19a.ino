int VCC_INPin = 12;   
int DMINUS_INPin = 11;   
int DPLUS_INPin = 10;   
int GND_INPin = 9;   
int VCC_OUTPin = 5;   
int DMINUS_OUTPin = 4;   
int DPLUS_OUTPin = 3;   
int GND_OUTPin = 2;   

void setup()
{
  Serial.begin(115200); 
  pinMode(VCC_INPin,INPUT_PULLUP);
  pinMode(DMINUS_INPin, INPUT_PULLUP);
  pinMode(DPLUS_INPin, INPUT_PULLUP);
  pinMode(GND_INPin, INPUT_PULLUP);
  pinMode(VCC_OUTPin, OUTPUT);
  pinMode(DMINUS_OUTPin, OUTPUT);
  pinMode(DPLUS_OUTPin, OUTPUT);
  pinMode(GND_OUTPin, OUTPUT);
}

void loop()
{
  digitalWrite(GND_OUTPin, LOW);
  digitalWrite(DPLUS_OUTPin, LOW);
  digitalWrite(DMINUS_OUTPin, LOW);
  digitalWrite(VCC_OUTPin, LOW);
  int val = digitalRead(GND_INPin);
  if (val == LOW){
    Serial.print("GND is OK!\n");
  }
  else{
    Serial.print("GND is NOT OK!\n");
  }
  val = digitalRead(DPLUS_INPin);
  if (val == LOW){
    Serial.print("D+ is OK!\n");
  }
  else{
    Serial.print("D+ is NOT OK!\n");
  }
  val = digitalRead(DMINUS_INPin);
  if (val == LOW){
    Serial.print("D- is OK!\n");
  }
  else{
    Serial.print("D- is NOT OK!\n");
  }
  val = digitalRead(VCC_INPin);
  if (val == LOW){
    Serial.print("VCC is OK!\n");
  }
  else{
    Serial.print("VCC is NOT OK!\n");
  }
  
  delay(3000);
  
}
