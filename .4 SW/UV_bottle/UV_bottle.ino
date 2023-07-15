#define LED1 0
#define LED2 1
#define LED3 2
#define BATADC 3
#define TOUCHBTN 4
#define LEDWORK 5
#define WAITTIME 600000
#define WORKTIME 50000
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(TOUCHBTN,INPUT);
  pinMode(LEDWORK,OUTPUT);
  pinMode(BATADC, INPUT);
}
void loop()
{
  uin64_t Time = 0;
  while(millis()-Time >WAITTIME)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    if(millis()-Time >WORKTIME)
    {  
      Time = millis();
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
    }
    else if(digitalRead(TOUCHBTN) == LOW)
    {  
      Time = millis();
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
    }
  }
}
