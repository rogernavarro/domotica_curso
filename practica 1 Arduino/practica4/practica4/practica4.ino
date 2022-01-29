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

  int valor1 = 0;
  int valor2 = 0;
  int valor3 = 0;

  if(valorpot >= 0 && valorpot <= 255)
  {
    valor1 = 255;
    valor2 = 0;
    valor3 = 0;
  }
  else if(valorpot >= 256 && valorpot <= 600)
  {
    valor1 = 255;
    valor2 = 255;
    valor3 = 0;
  }
  else
  {
    valor1 = 255;
    valor2 = 255;
    valor3 = 255;
  }
  
  Serial.print(valorpot);
  Serial.print(" ");
  
  Serial.print(valor1);
  Serial.print(" ");

  Serial.print(valor2);
  Serial.print(" ");

  Serial.print(valor3);
  Serial.print(" ");
  
  analogWrite( led1, valor1 );  //MANDAMOS QUE SE PRENDA EL LED
  analogWrite( led2, valor2 );  //MANDAMOS QUE SE PRENDA EL LED
  analogWrite( led3, valor3 );  //MANDAMOS QUE SE PRENDA EL LED

  delay(1000);
}
