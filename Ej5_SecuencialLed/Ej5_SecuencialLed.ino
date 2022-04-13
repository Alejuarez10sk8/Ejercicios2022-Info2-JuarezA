
int buttonPin=2;
volatile int ISRCounter = 3;
long timeCounter = 0;
const int timeThreshold = 140;
int buttonState;
int  T = 85;
         
void setup()       
{ 
         for (int i = 4; i < 12; i++){ 
         pinMode (i, OUTPUT); }
 attachInterrupt(digitalPinToInterrupt(2), debounce, RISING);
 attachInterrupt(digitalPinToInterrupt(3), debounce1, RISING);
} 
void loop ()   
{ 
  if(ISRCounter==0){
          for (int i = 4; i < 12; i++)
{ 
digitalWrite(i , HIGH) ; 
delay (T); 
digitalWrite (i, LOW); 
delay (T);
} 
  }
  if(ISRCounter==1){
          for (int i = 12; i > 3; i=i-1)   
{ 
digitalWrite(i , HIGH) ; 
delay (T); 
digitalWrite (i, LOW); 
delay (T);}
}                
} 
 void debounce()
{
  if (millis() > timeCounter + timeThreshold)
   {
      ISRCounter=0;
      timeCounter = millis();
   }
}
 void debounce1()
{
  if (millis() > timeCounter + timeThreshold)
   {
      ISRCounter=1;
      timeCounter = millis();
   }
}
