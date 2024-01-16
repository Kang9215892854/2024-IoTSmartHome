int Fan = 11;

void setup() {
  pinMode(Fan, OUTPUT);
}

void loop() {
  digitalWrite(Fan,255);
  delay(3000);
  digitalWrite(Fan,0);
  delay(3000);
}
