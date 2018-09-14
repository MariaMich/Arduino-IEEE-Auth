#include <NewPing.h>
#define trigger 8
#define echo 7
#define redPin 9
#define greenPin 10
#define bluePin 11
NewPing sonar(trigger,echo,200);
void setup() {
Serial.begin(9600);
 pinMode(redPin,OUTPUT);
 pinMode(greenPin,OUTPUT);
 pinMode(bluePin,OUTPUT); 
}

void loop() {
int var=sonar.ping_cm();
Serial.print("The distance is: ");
Serial.println(var);
map(var,0,1023,0,255);

if (var<=10){
  analogWrite(redPin,var*10);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}
else{
  analogWrite(redPin,255);
  analogWrite(greenPin,var*10);
  analogWrite(bluePin,255);
}
}
