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
  Serial.print("------PANTHERA------\n");
  digitalWrite(GND_OUTPin, LOW);
  delay(1000);
  int val = digitalRead(GND_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(PANTHERA) GND is OK!\n");
  }
  else{
    Serial.print("(PANTHERA) GND is NOT OK!\n");
  }
  digitalWrite(GND_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DPLUS_OUTPin, LOW);
  delay(1000);
  val = digitalRead(DPLUS_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(PANTHERA) D+ is OK!\n");
  }
  else{
    Serial.print("(PANTHERA) D+ is NOT OK!\n");
  }
  digitalWrite(GND_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DPLUS_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DMINUS_OUTPin, LOW);
  delay(1000);
  val = digitalRead(DMINUS_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(PANTHERA) D- is OK!\n");
  }
  else{
    Serial.print("(PANTHERA) D- is NOT OK!\n");
  }
  digitalWrite(GND_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DPLUS_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DMINUS_OUTPin, HIGH);
  delay(1000);
  digitalWrite(VCC_OUTPin, LOW);
  delay(1000);
  val = digitalRead(VCC_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(PANTHERA) VCC is OK!\n");
  }
  else{
    Serial.print("(PANTHERA) VCC is NOT OK!\n");
  }
  delay(500);
  Serial.print("------END OF PANTHERA------\n");
  Serial.print("------MADCATZ TE2------\n");
  digitalWrite(GND_OUTPin, LOW);
  delay(1000);
  val = digitalRead(GND_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(TE2) GND is OK!\n");
  }
  else{
    Serial.print("(TE2) GND is NOT OK!\n");
  }
  digitalWrite(GND_OUTPin, HIGH);
  delay(1000);
  digitalWrite(VCC_OUTPin, LOW);
  delay(1000);
  val = digitalRead(DPLUS_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(TE2) D+ is OK!\n");
  }
  else{
    Serial.print("(TE2) D+ is NOT OK!\n");
  }
  digitalWrite(GND_OUTPin, HIGH);
  delay(1000);
  digitalWrite(VCC_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DMINUS_OUTPin, LOW);
  delay(1000);
  val = digitalRead(DMINUS_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(TE2) D- is OK!\n");
  }
  else{
    Serial.print("(TE2) D- is NOT OK!\n");
  }
  
  digitalWrite(GND_OUTPin, HIGH);
  delay(1000);
  digitalWrite(VCC_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DMINUS_OUTPin, HIGH);
  delay(1000);
  digitalWrite(DPLUS_OUTPin, LOW);
  delay(1000);
  val = digitalRead(VCC_INPin);
  delay(500);
  if (val == LOW){
    Serial.print("(TE2) VCC is OK!\n");
  }
  else{
    Serial.print("(TE2) VCC is NOT OK!\n");
  }
  delay(500);
  Serial.print("------END OF TE2------\n");
  
}
