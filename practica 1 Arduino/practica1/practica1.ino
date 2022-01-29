void setup() {
  // put your setup code here, to run once:
  pinMode( 13, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( 12, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( 11, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite( 13, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(200);
  digitalWrite( 13, LOW );  //MANDAMOS SE APAGA EL LED
  digitalWrite( 12, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(200);
  digitalWrite( 12, LOW );  //MANDAMOS SE APAGA EL LED
  digitalWrite( 11, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(200);
  digitalWrite( 11, LOW );  //MANDAMOS SE APAGA EL LED

  digitalWrite( 11, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(200);
  digitalWrite( 11, LOW );  //MANDAMOS SE APAGA EL LED
  digitalWrite( 12, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(200);
  digitalWrite( 12, LOW );  //MANDAMOS SE APAGA EL LED
  digitalWrite( 13, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
  delay(200);
  digitalWrite( 13, LOW );  //MANDAMOS SE APAGA EL LED
}
