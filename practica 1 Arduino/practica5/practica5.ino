#include <SimpleDHT.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2
int pinDHT11 = 2;
int led1 = 3;
int led2 = 5;
int led3 = 11;

SimpleDHT11 dht11(pinDHT11);

void setup() {
  Serial.begin(115200);
  pinMode( led1, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( led2, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
  pinMode( led1, OUTPUT );    //SELECCIONAMOS QUE EL PIN SEA DE SALIDA
}

void loop() {
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT11...");
  
  // read without samples.
  byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT11 failed, err=");
    Serial.println(err);
    delay(1000);
    return;
  }
  
  Serial.print("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *Temperatura (C), "); 
  Serial.print((int)humidity); Serial.println(" Humedad");

  int valorpot = (int)temperature;

  int valor1 = 0;
  int valor2 = 0;
  int valor3 = 0;

  if(valorpot >= 0 && valorpot <= 25)
  {
    valor1 = 255;
    valor2 = 0;
    valor3 = 0;
  }
  else if(valorpot >= 26 && valorpot <= 30)
  {
    valor1 = 0;
    valor2 = 255;
    valor3 = 0;
  }
  else
  {
    valor1 = 0;
    valor2 = 0;
    valor3 = 255;
  }
  
  analogWrite( led1, valor1 );  //MANDAMOS QUE SE PRENDA EL LED
  analogWrite( led2, valor2 );  //MANDAMOS QUE SE PRENDA EL LED
  analogWrite( led3, valor3 );  //MANDAMOS QUE SE PRENDA EL LED
  
  // DHT11 sampling rate is 1HZ.
  delay(1500);
}
