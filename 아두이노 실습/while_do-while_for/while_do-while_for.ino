void setup() {
Serial.begin(9600);
}

void loop() {

int count, sum;

sum = 0 ; count = 0;

  do{
      count++;
      sum += count;
    }while(count < 10);
    Serial.println("do-while :" + String(sum));


sum = 0 ; count = 0;
  while(count <10)
  {
    count++;
    sum += count;  
  }
    Serial.println("while :" + String(sum));

    for(count = 1, sum = 0; count <=10; count++){
      sum += count;
    }
    Serial.println("for    :   " + String(sum));

    while(true);
}
