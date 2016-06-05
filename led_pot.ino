/* Programma per regolare la velocità di lampeggiamento di un led con un
* potenziometro esterno
*/

void setup() {
  // il led montato sulla scheda è collegato al pin 13
  pinMode(13, OUTPUT);
}

void loop(){
  // leggo la posizione del potenziometro (numero int fra 0-1023)
  int posPotenziometro = analogRead(A0);
  // durata del lampeggio in millisecondi
  int millisLampeggio = 2023 - posPotenziometro;

  // codice di lampeggio
  digitalWrite(13, HIGH);
  delay(millisLampeggio);
  digitalWrite(13, LOW);
  delay(millisLampeggio);
}
