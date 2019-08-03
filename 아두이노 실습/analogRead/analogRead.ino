int readPrevious = 0;
int readCurrent = 0;

void setup() {
Serial.begin(9600);
}

void loop() {
  String echoStr;
  readCurrent = analogRead(A0);

  if(readCurrent != readPrevious)
  {
    readPrevious = readCurrent;
  

    echoStr = "Current Analog input : " + String(readCurrent);

    Serial.println(echoStr);
  }
}
