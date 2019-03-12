#include <Servo.h>

//Crie um comando para acender nosso primeiro led

int pinSensor = 13;
int estadoSensor =0;

Servo myservo;

void setup() {

myservo.attach(9);
myservo.write(0);

}

void loop() {

estadoSensor = digitalRead (pinSensor);

//if (estadoSensor == 0) {
  myservo.write (90);
  delay(2000);
  myservo.write (-90);
  delay(2000);
  //}
}
