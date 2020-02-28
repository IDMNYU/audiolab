void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // tell arduino that pin #2 is an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(2, LOW);
  delay(90);
}
