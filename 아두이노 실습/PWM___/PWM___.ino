int LED = 3;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int i;

  for (i=0; i<256; i++)6
  {
  analogWrite(LED, i);
  delay(10);
  }
}
