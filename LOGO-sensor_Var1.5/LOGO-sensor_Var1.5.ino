int sensorPin = 10;
int value = 0;
int prevval =0;
int count=0;
void setup() {
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}
void loop() {
 value = digitalRead(sensorPin);
 if(value==0 && prevval==1){ // something is dected
   count++;
 }
 prevval=value;
 Serial.print(count);
 Serial.print("   ");
 Serial.println(value, DEC);
 delay(50);
}
