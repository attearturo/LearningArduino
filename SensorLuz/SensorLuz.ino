const int ledPin = 3;
const int sensorPin = A0;
int ledValue = 0;
int sensorValue = 0;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
sensorValue = analogRead(sensorPin);
  
  if(sensorValue < 100){
    digitalWrite(ledPin, LOW);
  } else if (sensorValue > 1000){
    digitalWrite(ledPin, HIGH);
  } else {
    ledValue = map(sensorValue, 100, 1000, 0, 255);
  }

 analogWrite(ledPin, ledValue);

 Serial.print("Entrada de luz: ");
 Serial.print(sensorValue);
 Serial.print(" Salida al LED: ");
 Serial.println(ledValue);

 delay(500);
}
