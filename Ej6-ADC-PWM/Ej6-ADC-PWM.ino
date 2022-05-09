#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int Pinmotor=9;
int PinBoton=2;
int contador=0;
int a = 50;
volatile int ISRCounter = 0;
long timeCounter = 0;
const int timeThreshold = 170;

int velocidad;
float Vout;
int Valor9;
int cuenta=0;

void setup() {
  lcd.begin(16, 2);
  pinMode(Pinmotor,OUTPUT);
  pinMode(PinBoton,INPUT);
  attachInterrupt(digitalPinToInterrupt(PinBoton), debounce, RISING);
}

void loop() 
{
  if(contador != ISRCounter)
  {
    contador = ISRCounter;
  }
  switch(contador)
  {
    case 0:
    espera();
    analogWrite(Pinmotor,LOW);
    break;
    
    case 1:
    motor();
    INT();
    break;
    
    case 2:
    motor();
    OUT();
    break;
    
    default:
    contador = 0;
    break;
  }
}

void espera()
{
    lcd.clear();
    lcd.print("Control de motor");//pantalla espera
    lcd.setCursor(0,1);
    lcd.print("  En Espera...  ");
    delay(a);
}

void motor()
 {
  velocidad = analogRead(A0); // entrada analogica 0 a 1023
  Valor9 = map(velocidad,0, 1023, 0, 255); // pin 9 de 0 a 255
  Vout = ((velocidad *5)/1023); //volts 0.00 a 5.00
  analogWrite(Pinmotor,Valor9);//regulación de motor
 }

void OUT()
 {
  lcd.clear();
  lcd.print("Vout = " + String(Vout) + "V");
  lcd.setCursor(0,1);
  lcd.print("Pin 9 = " + String(Valor9));
  delay(a);
 }

void INT()
{
  lcd.clear();
  lcd.print("Vin = " + String(Vout) + "V");
  lcd.setCursor(0,1);
  lcd.print("A0 = " + String(velocidad));
  delay(a);
}

void debounce()
{
  if (millis() > timeCounter + timeThreshold)
   {
      ISRCounter++;
      timeCounter = millis();
   }
   if(ISRCounter>2) ISRCounter=0;
}
