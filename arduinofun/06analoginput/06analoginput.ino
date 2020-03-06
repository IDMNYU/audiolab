void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  //Serial.println(val);
  analogWrite(5, val/4);
}
