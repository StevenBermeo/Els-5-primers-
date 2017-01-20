
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: PotenciometeLed                       **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************
//Potenciometro y Led

//********** Setup ****************************************************************

int sensorValue = 0;
void setup()                    // configura el final de salida

  {
  pinMode( 3, OUTPUT) ;
}

//********** Loop *****************************************************************

void loop()                    // inicia el bucle del programa 

{
  sensorValue = analogRead (A0) ;

analogWrite( 3, sensorValue/4) ;
}

//*********************** FUNCIONS *************************************************

// Observamos el control de un potenciometro sobre un led 
