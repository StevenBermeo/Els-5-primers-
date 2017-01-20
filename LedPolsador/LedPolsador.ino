
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: LedPolsador                           **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************
//Led y Pulsador 

//********** Setup ****************************************************************

void setup()                    // configura el final de salida

  {
  pinMode( 2, OUTPUT);          //configura el pin 2 como salida 
  pinMode( 4, INPUT) ;          //configura el pin 4 como entrada
}

//********** Loop *****************************************************************

void loop()                    // inicia el bucle del programa 

{
if ( digitalRead (4) ) {

digitalWrite( 2, HIGH) ;

}else{

digitalWrite( 2, LOW) ;

}
  
}

//*********************** FUNCIONS *************************************************

// Cuando presiono el pulsador se enciende el Led 
