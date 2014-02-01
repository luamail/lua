/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
 This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
//Control temperatura
int analogPin = 5; // Pin analogico 0 de Arduino
float temperature = 0.0;
int grados, decimas, gradR, deciR;
int lm35read, tmedia;
int val,cnt;

void setup()   {
  // Iniciamos comunicacion serie  
  Serial.begin(9600);
 
}
void loop()   {
  // Iniciamos comunicacion serie  
  Serial.begin(9600);
  
      lm35read = analogRead(analogPin);
  
 
 
    // Sacamos los datos por el puerto serie  
    Serial.print("Lectura en bruto ");
    Serial.print(lm35read);
    temperature=lm35read*(5/1023);
    Serial.print("  temperatura sin redondear  ");
    Serial.print(temperature);
    Serial.print("C  ");
    Serial.print("temperatura redondeada ");
    Serial.print(grados);
    Serial.print(".");
    Serial.println(deciR);
    delay(1000);
}


