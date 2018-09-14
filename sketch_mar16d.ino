 void setup() {
  pinMode(A1,INPUT);
  Serial.begin(9600);
}

void loop() {
  int a=analogRead(A1);
  Serial.println(a);
}
