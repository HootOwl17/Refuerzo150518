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
 int Valor1 = 1234;
 //int Residuo = Valor1 % 10;
 //Valor1 = Valor / 10;
 Serial.println(Valor1);
 for (int i = 0; i <= 3; i++) {
 Residuo [i] = Valor1 / 10;
 //Serial.println(Residuo[i]);
 }
 for (int i = 3; i >= 0; i--){
  Serial.println(Residuo[i]);
 }
 //Serial.println();
 delay(1000);
}
