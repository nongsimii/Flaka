void setup() {
Serial.begin(9600);
}

void loop() {        //C/C++ 언어 관련 내용이 들어가는 곳
  char ch1 ='A';
  char ch2 =65;
  char ch3 =ch1+1;

  int x, y, z, f;
  x = -32768;
  y = x-1;
  z = 32767;
  f = x + 1;

  char ab1[15];
  char ab2[8] = {'a', 'b', 'c', 'd', 'e'};
  char Str3[8] = {'a', 'b', 'c', 'd', 'e', '\0'};
  char Str4[ ] = "arduino";
  char Str5[8] = "arduino";
  char Str6[15] = "arduino";
  
  
  Serial.println(ab1);
  Serial.println(ab2);
  Serial.println(Str3);
  Serial.println(Str4);
  Serial.println(Str5);
  Serial.println(Str6);
  while(true);
}
