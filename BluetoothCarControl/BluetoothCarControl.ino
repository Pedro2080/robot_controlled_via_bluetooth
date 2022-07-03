#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11
#define LED 13
 
int engineSpeed=150;
char caracter; 
void forward(){ 
  analogWrite(ENA, engineSpeed); //. Controlling wheel speed
  analogWrite(ENB, engineSpeed); //. Controlling wheel speed
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("Robot goes forward");
}
 
void backward(){
  analogWrite(ENA,engineSpeed); //. Controlling wheel speed
  analogWrite(ENB,engineSpeed); //. Controlling wheel speed
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
 Serial.println("Robot goes backward");
}
 
void left(){
 analogWrite(ENA, engineSpeed); //. Controlling wheel speed
  analogWrite(ENB, engineSpeed); //. Controlling wheel speed
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH); 
  Serial.println("Robo turns left");
}
 
void right(){
  analogWrite(ENA, engineSpeed); //. Controlling wheel speed
  analogWrite(ENB, engineSpeed); //. Controlling wheel speed
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  Serial.println("Robot turns right");
}
 
void stop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  Serial.println("The robot to!");
}
 
void setup() { 
  Serial.begin(9600);
  pinMode(LED,OUTPUT); 
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
}
 
void loop() { 

  caracter=Serial.read();
  switch(caracter){
    case 'f': 
    forward(); 
    break;
    case 'a':
    backward();  
     break;
    case 'e':
    left();  
    break;
    case 'd': 
    right(); 
    break;
    case 'p': 
    stop(); 
    break;  

    default: 
     break;
  }
}