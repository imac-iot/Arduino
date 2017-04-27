const int PIRout=2;
void setup() {  //定義針腳輸出入
  pinMode(PIRout,INPUT);
  Serial.begin(9600);
  }
void loop() {
  int val=digitalRead(PIRout);  //讀取 PIR 輸出
  Serial.println(val);
  delay(1000);
}
