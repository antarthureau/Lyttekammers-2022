int toggle;
int pushPin=9;
int togValPre=1;
int togValNew;
int delTime=25;

void setup() {
Serial.begin(9600);
pinMode(pushPin,INPUT);
}

void loop() {
togValNew=digitalRead(pushPin);

if (togValPre==0&&togValNew==1){
  if (toggle==0){
  Serial.println("toggle 1");
  toggle=1;

}
else {
  Serial.println("toggle 0");
  toggle=0;
}
}
togValPre=togValNew;

delay(delTime);
}
