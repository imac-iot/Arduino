int din=2;
int ain=A0;
int a_value;
int d_value;
void setup()
{
  pinMode(din,INPUT);
  pinMode(ain,INPUT);
  Serial.begin(9600);
}
void loop()
{
  a_value=analogRead(ain);
  d_value = digitalRead(din);
  
  Serial.println(d_value);
  Serial.println(a_value);
  
  delay(500);
}
