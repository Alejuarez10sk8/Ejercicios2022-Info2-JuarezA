void setup() {
Serial.begin(9600);
}
typedef struct sensores {
  char sensor;
  int valor;
  unsigned long tiempo;
  
} Sensores;

void loop() {
   
  Sensores c;
Serial.print ("El tamanio es ");
Serial.print ( sizeof (c));
Serial.print ("\n");
delay(1000);
}
