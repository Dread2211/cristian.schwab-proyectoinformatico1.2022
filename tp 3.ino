bool printed = HIGH;
bool estadoBoton;
int tiempoBoton = 1000;
int pot1;
int pot2;
int pot3;
char buff[100];
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT); 
  pinMode(13,INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  if (estadoBoton == LOW)
  {	
    printed = LOW;
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    Serial.println("Tiene 10 s para configurar el color del led....");
    delay(tiempoBoton);
    pot1 = analogRead(A0);
    pot2 = analogRead(A1);
    pot3 = analogRead(A2);
  }
  	
  if (!printed) {
  	sprintf(buff, "El led esta usando esta configuracion de colores RGB: %d %d %d", pot1/4, pot2/4, pot3/4);
    Serial.println(buff);
    printed = HIGH;
    
    analogWrite(3, pot1/4);
    analogWrite(4, pot2/4);
	analogWrite(5, pot3/4);
  };

  
(10 / v)
}