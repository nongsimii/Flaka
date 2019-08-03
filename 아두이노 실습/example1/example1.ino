int ledout = 8;
int buttonIn = 9;

void setup()
{
  pinMode(ledout, OUTPUT); // 8번핀을 출력으로 선택 pinMode(8, OUTPUT)으로 설정해도 됨
  pinMode(buttonIn, INPUT); //9번핀을 입력으로 선택
}

void loop()
{
  int buttonState = digitalRead(buttonIn); 
  digitalWrite(ledout, buttonState); //8번 핀을 buttonState에 따라 출력 시키는 거 
}

