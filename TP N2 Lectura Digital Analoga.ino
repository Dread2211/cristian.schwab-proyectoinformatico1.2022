int l;
int o;
int r;
int t=10;
int q = A5;
int v;
void setup()
{
  for (l=9;l<=11;l++)
  for (o=6;o<=8;o++)
  for (r=3;r<=5;r++)
  pinMode (l,OUTPUT);
  pinMode (o,OUTPUT);
  pinMode (r,OUTPUT);
  pinMode (q,INPUT);
}
void loop()

{
  v = analogRead (q);
  analogWrite (8,0);
  analogWrite (7,0);
  analogWrite (6,255);
  delay(t * (v / 4));
  analogWrite (8,0);
  analogWrite (7,0);
  analogWrite (6,0);

  v = analogRead (q);

  digitalWrite (11,0);
  digitalWrite (10,255);
  digitalWrite (9,255);
  delay(t * (v / 4));
  digitalWrite (11,0);
  digitalWrite (10,0);
  digitalWrite (9,0);

  v = analogRead (q);

  analogWrite (5,255);
  analogWrite (4,255);
  analogWrite (3,0);
  delay(t * (v / 4));
  analogWrite (5,0);
  analogWrite (4,0);
  analogWrite (3,0);

  v = analogRead (q);
  
  delay(t * (v / 4));

}