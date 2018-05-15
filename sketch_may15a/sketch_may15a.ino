int Sensor1 = A1;
int Sensor2 = A0;

void setup() {
  // put your setup code here, to run once:
 pinMode(Sensor1, INPUT);
 pinMode(Sensor2, INPUT);
 Serial.begin(9600);
}
int Residuo [4] = {0, 0, 0, 0};
void loop() {
  // put your main code here, to run repeatedly:
 int Valor1 = analogRead(Sensor1);
 int Valor2 = analogRead(Sensor2);
 //int Residuo[i] = Valor1 % 10;
 //
 for (int i = 0; i <= 3; i++) {
 Residuo[i] = Valor1 / 10;
 Valor1 = Valor1 / 10;
 //Serial.println(Residuo[i]);
 }

 Serial.write('a')
 
 
 for (int i = 3; i >= 0; i--){
  Serial.println(Residuo[i]);
 }
 //Serial.println();
 delay(1000);
}
