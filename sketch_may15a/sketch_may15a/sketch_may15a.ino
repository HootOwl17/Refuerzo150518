int Sensor1 = A1;
int Sensor2 = A0;

void setup() {
  // put your setup code here, to run once:
 pinMode(Sensor1, INPUT);
 pinMode(Sensor2, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int Valor1 = analogRead(Sensor1);
 Serial.println(Valor1);
 delay(1000);
}
