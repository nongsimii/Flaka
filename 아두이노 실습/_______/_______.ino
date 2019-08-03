int A = 0;  //전역변수. Level 0

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println("Level 0 " + String(A));
  int A = 1; //loop 함수 내에서만 유효하다. Level 1
  Serial.println("Level 1 : " +String(A));

  if(A ==1 )
  {
    int A = 2; //loop 함수 내의 if 블록에서만 유효하다. Level 2
    Serial.println("Level 2 : " + String(A));
    {                               //가로 안에 는 이유가 동일한 블록 내에서 동일한 이름의 변수가 두 개 이상 존재할 수 없기 때문.
      int A = 3;
      Serial.println("Level 3 : " + String(A));
    }
  }

  Serial.println("Level 1 : " + String(A));

  while(true);
}
