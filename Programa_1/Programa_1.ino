/************************************************************************
**                                                                     **
**                             TITOL:Programa_1                        **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 08/03/2017  **
************************************************************************/

//****************************INCLUDE ***********************************

//*************************** VARIABLES *********************************
const int led0 = 9;          // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino

int velocitat = 20;          // velocitat de l'acció en ms
int valLdr0;    



//**************************** SERUP ************************************

void setup()
{
  
   pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
   
  }   

//******************************LOOP*************************************


void loop() {                        //inicia el bucle del probrama void loop()  {

  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  
  valLdr0 = map(valLdr0, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led
}

//****************************** FUNCIONES ******************************}
