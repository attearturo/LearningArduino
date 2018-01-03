const int led_pin = 3;
const int sensor_pin = A0;
int led_value = 0;
int sensor_value = 0;

void setup() {
 
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);

}

void loop() {
 
  sensor_value = analogRead(sensor_pin);


  if (sensor_value > 1000) {
    digitalWrite(led_pin, HIGH);
  } else if (sensor_value < 100) {
    digitalWrite(led_pin, LOW);
  } else {
    led_value = map(sensor_value, 100, 1000, 0, 255);
  }
  analogWrite(led_pin, led_value);

  Serial.print("Valor del sensor de luz: ");
  Serial.print(sensor_value);
  Serial.print(" Valor LED: ");
  Serial.print(led_value);
  Serial.println();
}
