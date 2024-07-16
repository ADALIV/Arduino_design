void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int a=0; a<255; a+=10) {
    analogWrite(11, a);
    delay(100);
  }
}
