const int led1=12;
const int led2=11;
const int led3=10;
const int led4=9;
const int led5=8;
const int led6=7;
const int potenciometro=5;
int valorpot=0;
int buzzer=8;
 

void setup(){
  pinMode(buzzer,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);  
  pinMode(led4,OUTPUT);  
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  Serial.begin(9600);
}

void loop(){
   int valorpot = analogRead(potenciometro);
   delay(10);
if(valorpot<1){
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);                                        
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
  tone(buzzer,262,100);
     delay(500);
}else if(valorpot<164){
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);                                        
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
    tone(buzzer,293,150);
  delay(50);
}else if(valorpot<328){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);                                        
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
    tone(buzzer,329,50);
  delay(10);
}else if(valorpot<511){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);                                        
digitalWrite(led4, HIGH);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
    tone(buzzer,349,50);
  delay(500);
}else if(valorpot<854){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);                                        
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led6, LOW);
    tone(buzzer,392,50);
  delay(10);
}else if(valorpot<953){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);                                        
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, HIGH);
    tone(buzzer,440,50);
  delay(500);
}
}