const int ledRojo = 3;   //LEDs conectados a los pines 3, 5, 6 
const int ledVerde = 5;
const int ledAzul = 6;
const int potRojo = 0;   //Potenciometro conectado a los pines 0, 1, 2
const int potVerde = 1;
const int potAzul = 2;

int rojo;                     
int verde;
int azul;


void setup() {
Serial.begin(9600);           //iniciamos la comunicacion serial con una tasa de 9600bps
  
  pinMode(ledRojo, OUTPUT);   //declaramos los pines del LED RGB como salida
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop() {
  rojo = analogRead(potRojo) / 4;
  verde = analogRead(potVerde) / 4;
  azul = analogRead(potAzul) / 4;

  analogWrite(ledRojo, rojo);
  analogWrite(ledVerde, verde);
  analogWrite(ledAzul, azul);

  Serial.print("Rojo: ");
  Serial.print(rojo);
  Serial.print(", ");

  Serial.print("Verde: ");
  Serial.print(verde);
  Serial.print(", ");

  Serial.print("Azul: ");
  Serial.println(azul);

  delay(500);

}
