//pinos que serão utilizados

#define trigPin 12 
#define echoPin 13

int Buzzer = 8; //conectando o buzzer
int duration, distance;

void setup() //instanciando o inicio no monitor serial e pinos
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Buzzer,OUTPUT); 
}

void loop() //disparador "trig" para a cada 10 milissegundos
{ 
 digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn (echoPin,HIGH);
  distance = (duration/2) /29.1;
  
//condição de distancia 
  if (distance >=10 || distance <=0){
    Serial.println("Nenhum objeto detectado");
      noTone(Buzzer);
  }
  else{
    Serial.println("Obejto detectado");
    Serial.print("distance= ");
    Serial.print(distance);
    tone(Buzzer,400);
  }
  
}
