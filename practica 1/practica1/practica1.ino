void setup() {
  // put your setup code here, to run once:
  pinMode( 13, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( 12, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( 11, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite( 13, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(500);
  digitalWrite( 13, LOW );  //MANDAMOS SE APAGA EL LED
  //delay(1000);
  digitalWrite( 12, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(500);
  digitalWrite( 12, LOW );  //MANDAMOS SE APAGA EL LED
  //delay(1000);
  digitalWrite( 11, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(500);
  digitalWrite( 11, LOW );  //MANDAMOS SE APAGA EL LED
  //delay(1000);
}
