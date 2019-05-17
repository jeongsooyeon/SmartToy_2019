int a = 1;

void setup() {

Serial.begin(9600);

}



void loop() {

a = a +1;

Serial.print("a = ");

Serial.println(a);

delay(500);

}
