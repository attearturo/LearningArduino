const int led = 3;  //LED conetado al pin 3
int brillo;
const int pot = 0;  //Potenciometro conectado al pin 0

void setup() {
  pinMode(3, OUTPUT);  //declara el LED como salida
  // los pins analogicos se declaran como entrada automaticamente
}

void loop() {
  brillo = analogRead(pot) / 4;  /* devuelve valores de 0 a 1023 y los divide por 4 para escalarlos al LED */
    analogWrite(led, brillo);
}
