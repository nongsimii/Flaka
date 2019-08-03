void setup() {
 Serial.begin(9600);
}

void loop() {
  int a = 10, b = 3; 
  float fa = 10.0, fb = 3.0;

  Serial.println(a%b);
  Serial.println("hi " + String(a%b));
   Serial.println(a/b);
  Serial.println("hi " + String(a/b));
   Serial.println(fa/fb);
  Serial.println("hi " + String(fa/fb));
  while(true);
  // put your main code here, to run repeatedly:

}
