int cnt;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  cnt = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println('a' +cnt); //a는 아스키코드로 97 //a지우면 0부터 나온다.
  delay(1000);
  cnt = cnt + 1;

}
