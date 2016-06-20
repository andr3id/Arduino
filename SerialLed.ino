/******************************************************************************
Programma per comandare l'accensione e lo spegnimento del led integrato sulla
scheda Arduino da tastiera.
Per riferimento vedi:
https://learn.adafruit.com/adafruit-arduino-lesson-5-the-serial-monitor/arduino-code
******************************************************************************/

void setup(){
  pinMode(13, OUTPUT);                                                // uso il led montato sul pin 13
  Serial.begin(9600);                                                 // arduino comunica attraverso la porta seriale a 9600 baud
  Serial.println("Digita H o L per accendere o spegnere il led:");    // messaggio da stampare solo 1 volta all'inizio
}

void loop(){
  if (Serial.available())             // tutto il codice del loop è contenuto nell'if. Se non è possibile avviare una comunicazione seriale nulla viene eseguito
  {
    char tasto = Serial.read();       // leggo il tasto premuto come un carattere char
    if (tasto == 'L')
    {
      digitalWrite(13, LOW);          // se il tasto premuto è L spengo il led
    }
    if (tasto == 'H')
    {
      digitalWrite(13, HIGH);         // se il tasto premuto è H accendo il led
    }
  }
}
