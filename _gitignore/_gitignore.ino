
/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Blink                                 **
**                                                                               **
**   Nom: Kevin Steven Bermeo Alvarado                           Data:20/01/2017 **
**********************************************************************************/

//************************* INCLUDE ***********************************************


//************************** VARIABLES ********************************************
//Led

//********** Setup ****************************************************************

void setup()                    // configura el final de salida

  {
// inicia el pin digital LED_BUILTIN como una salida
  pinMode(LED_BUILTIN, OUTPUT);
}

//********** Loop *****************************************************************

void loop()                    // inicia el bucle del programa 

{
 
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // enciende el led
  delay(1000);                       // espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el led
  delay(1000);                       // espera un segundo

}

//*********************** FUNCIONS *************************************************

// Enciende y apaga un led 
