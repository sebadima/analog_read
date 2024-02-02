void setup() {

  // Setta la seriale a 115200 baud
  Serial.begin(115200);
  // Setta la precisione dell'ingresso ADC a 12 bits (0-4096)
  // Il valore 4095 corrisponde a 3.3V
  analogReadResolution(12);

}


void loop() {

  // Leggi il valore del potenziometro al pin 34
  int ValoreAnalogico = analogRead(34);
  // Scrivi il valore appena rilevato 
  Serial.printf("Valore del potenziometro = %d\n", ValoreAnalogico);
  delay(100); // Un decimo di secondo tra due letture consecutive

}
