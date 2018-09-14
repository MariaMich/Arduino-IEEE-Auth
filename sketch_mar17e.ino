#define redPin 9
#define greenPin 10
#define bluePin 11

void setup() {
 pinMode(redPin,OUTPUT);
 pinMode(greenPin,OUTPUT);
 pinMode(bluePin,OUTPUT); 
}

void loop() {
  char re;
  int av=Serial.available();
  if (av!=0){
     re=Serial.read();
  }
  if (av!=0 && re=="r"){
  analogWrite(redPin,102);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
  delay(1000);
  }
  else if(av!=0 && re=="g"){
  analogWrite(redPin,255);
  analogWrite(greenPin,102);
  analogWrite(bluePin,255);
    delay(1000);
}
  else if(av!=0 && re=="b"){
  analogWrite(redPin,255);
  analogWrite(greenPin,255);
  analogWrite(bluePin,102);
    delay(1000);
  }
  else {
  analogWrite(redPin,153);
  analogWrite(greenPin,153);
  analogWrite(bluePin,153);
    delay(1000);
  }

}
