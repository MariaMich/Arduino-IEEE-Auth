#include <Servo.h>
#include <NewPing.h>
#define trigger 13
#define echo 12
Servo myservo;
NewPing sonar(trigger,echo,180);

void setup() {
  myservo.attach(3);
  Serial.begin(9600);
}

void loop() {
  int var=sonar.ping_cm();
  
  myservo.write(var);
  delay(200);
}
