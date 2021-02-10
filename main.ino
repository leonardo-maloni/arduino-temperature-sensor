// Inizializzazione dei componenti
void setup() {
  Serial.begin(1600); // Imposta la velocità del clock (bit al secondo)
  pinMode(A0, INPUT); // Dichiara il pin A0 analogico come flusso di dati in INPUT
}

// Programma principale (in loop)
void loop() {
  float t = ((analogRead(A0)*(5.0/1024))-0.5)/0.01; // Conversione dei dati ricevuti dal pin A0 in gradi Celsius
  Serial.println(t); // Output della temperatura "t" nel terminale
  delay(200); // Timeout (in millisecondi)
}