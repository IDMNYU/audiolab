bool pattern[] = {1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1};
int ptr = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // tell arduino that pin #2 is an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, pattern[ptr]);
  delay(10);
  digitalWrite(2, LOW);
  delay(90);
  ptr = (ptr+1)%16;
}
