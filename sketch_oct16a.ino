bool prevState;
bool ledState=HIGH;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  prevState=digitalRead(8);
  if (digitalRead(8)==HIGH && prevState==LOW){
    digitalWrite(2,ledState);
    ledState=(!(ledState));
  }
  
}
