//Boton para encender LED

int boton = 0;    //Estado del boton
int salida = 0;   //0 = LED APAGADO, 1 = LED ENCENDIDO
int estadoAnterior = 0; //Guarda el estado anterior del boton

void setup(){
  pinMode(8, INPUT);
  pinMode(4, OUTPUT);
}

void loop(){
  boton = digitalRead(8);

  if(boton == HIGH && (estadoAnterior == LOW)){
    salida = 1 - salida;
    delay(20);
  }

  estadoAnterior = boton;  //Guarda el valor actual

  if(salida == 0){
    digitalWrite(4, LOW);  //Apagamos el LED
  } else {
    digitalWrite(4, HIGH);  //Encendemos el LED
  } 
}

