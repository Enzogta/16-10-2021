int pinoSensorluz = A0;
int valorluz = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  valorluz = analogRead(pinoSensorluz);
  Serial.println(valorluz);
  // put your main code here, to run repeatedly:

}
