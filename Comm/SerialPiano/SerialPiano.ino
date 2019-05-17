int ib = 0;  //for incoming serial data
int buzzer = 12; //부저가 연결된 디지털핀


void setup() {
  Serial.begin(9600); //opens serial port, sets data
  //pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // send data only when you receive data:
  if (Serial.available() > 0) {  //아두이노가 데이터를 받아서 0 이상이면
  
    // read the incoming byte:
    ib = Serial.read();
    if(ib == 'a')
    {
      tone(buzzer, 261, 1000); //261:음의 높낮이/주파수, 1000:음의 지속시간
      //digitalWrite(LED_BUILTIN, HIGH); 
      Serial.print("도");
    }
    else if(ib == 's')
    {
      tone(buzzer, 293, 1000);
      Serial.print("레");
    }
    else if(ib == 'd')
    {
      tone(buzzer, 329, 1000);
      Serial.print("미");
    }
    else if(ib == 'f')
    {
      tone(buzzer, 349, 1000);
      Serial.print("파");
    }
    else if(ib == 'g')
    {
      tone(buzzer, 391, 1000);
      Serial.print("솔");
    }
    else if(ib == 'h')
    {
      tone(buzzer, 440, 1000);
      Serial.print("라");
    }
    else if(ib == 'j')
    {
      tone(buzzer, 493, 1000);
      Serial.print("시");
    }
    else if(ib == 'w')
    {
      tone(buzzer, 277, 1000);
      Serial.print("도#");
    }
    else if(ib == 'e')
    {
      tone(buzzer, 311, 1000);
      Serial.print("레#");
    }
    else if(ib == 't')
    {
      tone(buzzer, 369, 1000);
      Serial.print("파#");
    }
    else if(ib == 'y')
    {
      tone(buzzer, 415, 1000);
      Serial.print("솔#");
    }
    else if(ib == 'u')
    {
      tone(buzzer, 466, 1000);
      Serial.print("라#");
    }
    else if(ib == 'k')
    {
      tone(buzzer, 515, 1000);
      Serial.print("+도");
    }
    else if(ib == 'z')
    {
      tone(buzzer, 246, 1000);
      Serial.print("-시");
    }
    else if(ib == 'x')
    {
      tone(buzzer, 220, 1000);
      Serial.print("-라");
    }
    else if(ib == 'l')
    {
      tone(buzzer, 584, 1000);
      Serial.print("+도");
    }
    else if(ib == ';')
    {
      tone(buzzer, 659, 1000);
      Serial.print("+레");
    }
    Serial.print((char)ib);
  }
  
}
