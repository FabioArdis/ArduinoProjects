//Includo la libreria LCD
#include <LiquidCrystal.h>

//Inizializzo il display
LiquidCrystal lcd (0, 1, 8, 9, 10, 11);

//Inizializzo il led + le variabili
int led = 6;
int brightness = 0;
int fadeAmount = 5;

//Inizializzo i cognomi
String cognomi[7] = {"Cognome1", "Cognome2", "Cognome3", "Cognome4", "Cognome5", "Cognome6", "Cognome7"};

//Ciclo iniziale
void setup()
{
  //Inizializzo entrambi i componenti
  lcd.begin(16, 2);
  pinMode(led, OUTPUT);
}

//Funzione led effetto a scomparsa
void fade(){
  //Valore minimo -> massimo
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 10) {
    analogWrite(led, fadeValue);
    delay(30);
  }
  //Valore massimo -> minimo
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 10) {
    analogWrite(led, fadeValue);
    delay(30);
  }
}


//Ciclo infinito
void loop()
{
  //Ciclo iterativo per stampare i nomi
  for(int i=0; i< 7; i++){
    //Pulisce lo schermo
    lcd.clear();

    //Posiziona il cursore
    lcd.setCursor(0,0);

    //Stampa il nome della scuola
    lcd.print("Nome Scuola");

    //Riposiziona il cursore
    lcd.setCursor(0,1);

    //Stampa il nome
    lcd.print(cognomi[i]);

    //Led effetto scomparsa
    fade();
  }
  
}
