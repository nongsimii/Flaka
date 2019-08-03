void setup() {
Serial.begin(9600);
}

void loop() {
  int A = 1;
  int B[5] ={11, 12, 13, 14, 15};

  Serial.println("Add : " +String(int(&A), HEX));

  for(int i = 0; i <5; i++)
  {
      Serial.println("ADD of B["+String(i)+"]: " +String(int(&B[i]), HEX));   
  }

  while(true);
}
