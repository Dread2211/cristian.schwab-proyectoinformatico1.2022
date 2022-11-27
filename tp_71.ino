#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define boton1 9
#define boton2 10
#define boton3 11
#define boton4 12


			// A   B   C   D   E   F   G
int vNum0[] = {1 , 1 , 1 , 1 , 1 , 1 , 0};
int vNum1[] = {0 , 1 , 1 , 0 , 0 , 0 , 0};
int vNum2[] = {1 , 1 , 0 , 1 , 1 , 0 , 1};
int vNum3[] = {1 , 1 , 1 , 1 , 0 , 0 , 1};
int vNum4[] = {0 , 1 , 1 , 0 , 0 , 1 , 1};
int vNum5[] = {1 , 0 , 1 , 1 , 0 , 1 , 1};
int vNum6[] = {1 , 0 , 1 , 1 , 1 , 1 , 1};
int vNum7[] = {1 , 1 , 1 , 0 , 0 , 0 , 0};
int vNum8[] = {1 , 1 , 1 , 1 , 1 , 1 , 1};
int vNum9[] = {1 , 1 , 1 , 1 , 0 , 1 , 1};


int vLetA[] = {1 , 1 , 1 , 0 , 1 , 1 , 1}; 
int vLetC[] = {1 , 0 , 0 , 1 , 1 , 1 , 0};
int vLetD[] = {1 , 1 , 1 , 1 , 1 , 1 , 0};
int vLetE[] = {1 , 0 , 0 , 1 , 1 , 1 , 1};
int vLetH[] = {0 , 1 , 1 , 0 , 1 , 1 , 1};
int vletf[] = {1 , 0 , 0 , 0 , 1 , 1 , 1};

int pin[] = {A , B , C , D , E , F , G};
void setup()
{
  pinMode(boton1, INPUT); 
  pinMode(boton2, INPUT);
  pinMode(boton3, INPUT);
  pinMode(boton4, INPUT);
  
  pinMode((A , B , C , D , E , F , G), OUTPUT);
  
  Serial.begin(9600);
  
int pin; 
}

void loop()
{
  if (digitalRead(boton1)==LOW & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==LOW))
  { 
    for( int i = 0 ; i < sizeof(vNum0); i++ )
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum0[i] );
    }
  }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vNum1); i++ )
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum1[i] );
    }
   }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vNum2); i++ )  
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum2[i] );
    }
  }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vNum3); i++ ) 
  	{
      Serial.println (i);
      digitalWrite( pin[i] , vNum3[i] );
    }
  }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vNum4); i++ )
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum4[i] );
    }
  }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vNum5); i++ )  
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum5[i] );
    }
  }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vNum6); i++ )  
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum6[i] );
    }
  }else if (digitalRead(boton1)==LOW & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vNum7); i++ )
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum7[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vNum8); i++ ) 
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum8[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vNum9); i++ ) 
    {
      Serial.println (i);
      digitalWrite( pin[i] , vNum9[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vLetA); i++ )
    {
      Serial.println (i);
      digitalWrite( pin[i] , vLetA[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==LOW) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vLetC); i++ )  
    {
      Serial.println (i);
      digitalWrite( pin[i] , vLetC[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vLetD); i++ )  
    {
      Serial.println (i);
      digitalWrite( pin[i] , vLetD[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==LOW) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vLetE); i++ )  
  {
      Serial.println (i);
      digitalWrite( pin[i] , vLetE[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==LOW))
  {
    for( int i = 0 ; i < sizeof(vletf); i++ ) 
    {
      Serial.println (i);
      digitalWrite( pin[i] , vletf[i] );
    }
  }else if (digitalRead(boton1)==HIGH & (digitalRead(boton2)==HIGH) & (digitalRead(boton3)==HIGH) & (digitalRead(boton4)==HIGH))
  {
    for( int i = 0 ; i < sizeof(vLetH); i++ )
    {
      Serial.println (i);
      digitalWrite( pin[i] , vLetH[i] );
    }
  }
}