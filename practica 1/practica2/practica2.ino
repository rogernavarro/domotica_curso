int led1 = 3;
int led2 = 5;
int led3 = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //inicia la comunicación del puerto serial
  pinMode( led1, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( led2, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( led1, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorpot = analogRead(A0);

  Serial.print(valorpot);
  
  analogWrite( led1, valorpot );  //MANDAMOS QUE SE PRENDA EL LED
  delay(1000);
  analogWrite( led1, 0 );         //MANDAMOS SE APAGA EL LED
  analogWrite( led2, valorpot );  //MANDAMOS QUE SE PRENDA EL LED
  delay(1000);
  analogWrite( led2, 0 );         //MANDAMOS SE APAGA EL LED
  analogWrite( led3, valorpot );  //MANDAMOS QUE SE PRENDA EL LED
  delay(1000);
  analogWrite( led3, 0 );         //MANDAMOS SE APAGA EL LED
}
