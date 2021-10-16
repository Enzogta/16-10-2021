int RED =11;
int BLUE =10;
int GREEN =9;
int pinoSensorluz = A0;
int valorluz = 0;
void setup() {
   pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  valorluz = analogRead(pinoSensorluz);
  Serial.println(valorluz);
  if(valorluz< 240 && valorluz >190){
    RGB_color(255,0,0);
  }
  if(valorluz  < 180 ){
    RGB_color(0,255,0);
  
  }
    

}
 void RGB_color(int red, int green ,int blue){
 analogWrite(RED,red);
 analogWrite(GREEN,green);
 analogWrite(BLUE,blue);
  
 }
