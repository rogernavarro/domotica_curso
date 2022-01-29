int led1 = 3;
int led2 = 5;
int usepot = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //inicia la comunicación del puerto serial
  pinMode( led1, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( led2, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
}

void loop() {
  // put your main code here, to run repeatedly:
  if( Serial.available() ) //si la comunicacion del arduino esta disponible
  {
    //obtenemos el dato
    String dato = Serial.readString();
    Serial.print(dato);

    if( (dato == "encender") || (dato == "prender") )
    {
      digitalWrite( led1, HIGH ); //MANDAMOS QUE SE PRENDA EL LED
    }
    else if( dato == "apagar" )
    {
      digitalWrite( led1, LOW );  //MANDAMOS SE APAGA EL LED
    }
    else if( dato == "pot" )
    {
      usepot = 1;
    }

    if(usepot == 1)
    {
      //regulamos usando el potenciometro
      int valorpot = analogRead(A0);
      int valor = map ( valorpot, 0, 1023, 0, 255 );
      Serial.print(valor);
      analogWrite( led2, valor );
    }
  }
}
