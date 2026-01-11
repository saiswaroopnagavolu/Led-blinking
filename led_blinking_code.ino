
  int led13 = 13;
  int led12= 12;
  int led11=11;
void setup()
{

  pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led11, OUTPUT);
}

void loop()
{
  digitalWrite(led13, HIGH);
  delay(1000); 
  digitalWrite(led13, LOW);
  delay(1000);
  digitalWrite(led12, HIGH);
  delay(1000);
  digitalWrite(led12, LOW);
  delay(1000);
  digitalWrite(led11, HIGH);
  delay(1000);
  digitalWrite(led11, LOW);
  delay(1000);
  
}