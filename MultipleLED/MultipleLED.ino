int ledPins[] = {
  2,3,4,5,6,7,8,9};

void setup()
{
  for (int i = 0; i< 8; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  oneAfterAnother();
}

void oneAfterAnother()
{
  int delayTime = 50;
  for (int extraDelay=0; extraDelay < 200; extraDelay = extraDelay+50)
  {
    delayTime = delayTime + extraDelay;
    for (int i=0; i<8;i++)
    {
      digitalWrite(ledPins[i], HIGH);
      delay(delayTime);
    }

    for (int i=0; i<8;i++)
    {
      digitalWrite(ledPins[i], LOW);
      delay(delayTime);
    }
  }
}


