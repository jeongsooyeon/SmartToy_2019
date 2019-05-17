int incomingByte = 0;  //for incoming serial data


void setup() {
  Serial.begin(9600); //opens serial port, sets data

}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {  //아두이노가 데이터를 받아서 0 이상이면
  
    // read the incoming byte:
    incomingByte = Serial.read();  //루프를 통해 계속적으로 나한테 들어오는 바이트를 시리얼에서 읽는다. 
    incomingByte = incomingByte+1; 
  
    // say what you got:
    Serial.print((char)incomingByte); //아두이노에서 화면에 보낸다. (=프린트)
  }
  
}
