
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: LED                                   **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **

**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************

//********** Setup ****************************************************************

void setup()                    // configura el final de salida

  {
  pinMode( 2, OUTPUT)           // configura el pin2 como salida
}

//********** Loop *****************************************************************

void loop()                    // inicia el bucle del programa 

{
 
 digitalWrite( 2, HIGH) ;  //enciende el led

delay( 500) ;               // espera medio segundo 

digitalWrite( 2, LOW) ;     // apaga el led 

delay( 500) ;               //espera medio segundo
  
}

//*********************** FUNCIONS *************************************************

// Enciende y apaga un led 
