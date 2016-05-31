/*
 * Programma per leggere il valore istantaneo di un potenziometro
 */

void setup() {
  
    Serial.begin(9600);   // inizializzo la connessione seriale a 9600 bit per secondo

}

void loop() {
  // leggo il valore di resistenza del potenzionametro dal pin A0
  int resistenza = analogRead(A0);
  
  // comunico il valore al computer attraverso la porta seriale
  Serial.println(resistenza);
  delay(200);     // intervallo di tempo fra 2 letture consecutive (in ms)

}
