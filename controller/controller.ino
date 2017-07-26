int base;
int value = 0;
int i = 0;

void setup()
{
  pinMode(1, OUTPUT);
  digitalWrite(0, 1);
  base = analogRead(3);
}

void loop()
{
  value = max(analogRead(3), value);
  if (i % 16 == 0) {
    int toWrite = (value - base) * 32;
    analogWrite(1, toWrite < 0 ? 0 : toWrite > 255 ? 255 : toWrite);/*
    digitalWrite(1, 1);
    delay(1000);
    digitalWrite(1, 0);
    delay(1000);
    for (int i = 0; i < 10; ++i) {
      digitalWrite(1, 1);
      delay((value & 1) ? 500 : 200);
      digitalWrite(1, 0);
      delay(700);
      value >>= 1;
    }
    delay(3000);*/
    value = 0;
  }
  ++i;
  delay(10);
}
