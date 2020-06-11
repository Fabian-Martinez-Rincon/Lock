int x;

void setup() {
  Serial.begin (9600);
  for(int i=2; i <=4; i++){
    pinMode(i, OUTPUT);
    }
  for (int e=5;e<=8;e++){
    pinMode(e,INPUT);
    
    }
  Serial.println("Ingresar Contraseña");
  

    
}

void loop() {
  teclado();

}

void teclado(){
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  if(digitalRead(5)==HIGH){
    Serial.println("Numero:1"); 
    x=1;
    delay(250); 
      }
  if(digitalRead(6)==HIGH){
    Serial.println("numero:4");
    x=4;
    delay(250);
    }
  if (digitalRead(7)==HIGH){
    Serial.println("Numero:7"); 
    x=7;
    delay(250); 
    }
    if (digitalRead(8)==HIGH){
    Serial.println("Numero:*"); 
    x=20;
    delay(250); 
    }
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  if(digitalRead(5)==HIGH){
    Serial.println("numero:2");
    x=2;
    delay(250);}
    if(digitalRead(6)==HIGH){
    Serial.println("numero:5");
    x=5;
    delay(250);
    }
    if(digitalRead(7)==HIGH){
    Serial.println("numero:8");
    x=8;
    delay(250);
    }
    if(digitalRead(8)==HIGH){
    Serial.println("numero:0");
    x=0;
    delay(250);
    }
digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  if(digitalRead(5)==HIGH){
    Serial.println("numero:3");
    x=3;
    delay(250);}
    if(digitalRead(6)==HIGH){
    Serial.println("numero:6");
    x=6;
    delay(250);
    }
    if(digitalRead(7)==HIGH){
    Serial.println("numero:9");
    x=9;
    delay(250);
    }
    if(digitalRead(8)==HIGH){
    Serial.println("numero:#");
    x=21;
    delay(250);
    }

    
  }    


  
  
