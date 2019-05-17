void loop() {
  if(digitalRead(BUTTON_IN) == LOW) {
    digitalWrite(LED, HIGH); //LED가 켜지면
    Serial.println("LED ON");  //LED ON 출력
  } else {
    digitalWrite(LED, LOW); //LED가 꺼지면
    Serial.println("LED OFF"); //LED OFF 출력
  }
}
