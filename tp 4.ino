#include <LiquidCrystal.h>

LiquidCrystal LCD(7, 5, 6, 8, 9, 12);
  
#define s_amb A3
#define s_tmp A1
#define boton A0

int estado= 0;
int temp=0;

void setup()
{
  
  LCD.begin( 16 , 2 );
  LCD.setCursor( 0 , 0 );
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(s_amb, INPUT);
  pinMode(s_tmp, INPUT);
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int intensidadAmb = analogRead(s_amb);
  map(intensidadAmb, 0, 2056, 0, 255);
  temp = map(analogRead(s_tmp), 0,1023, -50, 450);
  
  if(intensidadAmb ==0)
  {
    if(temp<18)
    {
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    }else{
      if (temp>18 and temp<90)
      {
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
      }else{
        if (temp>90)
        {
          digitalWrite(2, HIGH);
          digitalWrite(3, LOW);
          digitalWrite(4, LOW);
        }
      }
    }
  }else{
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  
 if (digitalRead(boton) == !HIGH)
  {
    
    estado = estado + 1;
    delay(500);
      
  }
 if (estado == 1)
  {
  	LCD.print("Valor Temp: ");
	LCD.print(temp);
    delay(100);
    LCD.clear();
 	
  }
  
 else if (estado == 2)
  {
 	LCD.print("Valor Luz: ");
 	LCD.print(intensidadAmb);
    delay(100);
    LCD.clear();

    
   }
  else if (estado == 3)
   {
    estado = 0;
   }
}