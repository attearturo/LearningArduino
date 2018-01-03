const int ledPin = 13;  //el LED se conectará al pin 4

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);  //declaramos el pin 4 como salida
}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(ledPin, HIGH); //encendemos el LED
  delay(1000);
  digitalWrite(ledPin, LOW);  //apagamos el LED
  delay(1000);
  
}
