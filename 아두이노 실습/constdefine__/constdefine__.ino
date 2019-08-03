#define const1 5 //상수 정의 const1을 5로 대체한다.

void setup() {
 Serial.begin(9600);
}

void loop() {
  const int CONST2 = 10;
  const char a = 'A';

  Serial.println("define : " + String(const1));
  Serial.println("const keyword" + String(CONST2));
  Serial.println("const" + String(a));
  
  //const1 = const1 +1;
//  CONST2 = CONST2 +2;
  a = a +1;

  while(true);
}
