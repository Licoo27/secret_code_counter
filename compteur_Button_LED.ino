int compteur = 0;
void setup()
{
  // put your setup code here, to run once:
  pinMode(9, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(9) == HIGH)
  {
    delay(150);
    if (digitalRead(9) == LOW)
    {
      compteur++;
      Serial.println("TIC");  
    }
  }
  if (compteur == 5) 
  {
    digitalWrite(3, HIGH);
    delay(1000);
    compteur = 0;
    digitalWrite(3, LOW);
    delay(15);  
  }
}
