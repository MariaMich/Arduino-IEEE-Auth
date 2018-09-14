#define redPin 9
#define greenPin 10
#define bluePin 11
void setup() {
 pinMode(redPin,OUTPUT);
 pinMode(greenPin,OUTPUT);
 pinMode(bluePin,OUTPUT); 
}

void loop() {
  analogWrite(redPin,153);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
  delay(1000);
  analogWrite(redPin,255);
  analogWrite(greenPin,102);
  analogWrite(bluePin,255);
  delay(1000);
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,102);
  delay(1000);
  
}
