void setup() {
 Serial.begin(9600);
}

void loop() {
 int a;

 a = a | 0b00000100;

 Serial.println(String(a));

 while(true);
}
