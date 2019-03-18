int led_red = 0; // o LED vermelho está conectado ao pino 0 do Arduino
int led_yellow = 1; // o LED amarelo está conectado ao pino 1 do Arduino
int led_green = 2; // o LED verde está conectado ao pino 2 do Arduino

void setup() {
  // configurar todos os LEDs como OUTPUT
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop() {
  // Quando o LED Verde ligar os demais desligam
  digitalWrite(led_red, LOW); 
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
  delay(2000);    // espera 2 segundos
  
  // Quando o LED Amarelo ligar os demais desligam
  digitalWrite(led_red, LOW);   
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
  delay(1000);   // espera 1 segundo
  
  // Quando o LED Vermelho ligar os demais desligam
  digitalWrite(led_red, HIGH);  
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, LOW);
  delay(3000);  // espera 3 segundos
}
