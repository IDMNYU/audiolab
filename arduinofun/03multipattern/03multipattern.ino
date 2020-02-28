bool pattern1[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0};
bool pattern2[] = {1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1};
int ptr1 = 0;
int ptr2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // tell arduino that pin #2 is an OUTPUT
  pinMode(3, OUTPUT); // tell arduino that pin #2 is an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, pattern1[ptr1]);
  digitalWrite(3, pattern2[ptr2]);
  delay(10);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(90);
  ptr1 = (ptr1+1)%16;
  ptr2 = (ptr2+1)%16;
}
