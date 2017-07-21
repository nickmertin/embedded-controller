void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  byte state = analogRead(2);
  analogWrite(0, state);
  analogWrite(1, state);
}
