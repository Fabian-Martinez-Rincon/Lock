int pb=2;
int p1=3;
int p2=4;
void setup() {
  pinMode(pb, OUTPUT);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
}

void loop() {
  digitalWrite(pb, HIGH);
  digitalWrite(p1, LOW);
  digitalWrite(p2, HIGH);

}
