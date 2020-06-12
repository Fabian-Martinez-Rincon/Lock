int x=0,y=0,op=0,c=0,result;
int arrTeclado[4][3]={{1,2,3},{4,5,6},{7,8,9},{20,0,21}};
int i=0;
int t=0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 for( i=0;i<=2;i++){
  pinMode(i+2,OUTPUT);
  }
for( t=0 ; t<=3 ; t++){
  pinMode(t + 5,INPUT);
  }
  Serial.println("ingrese la contra");
}



  
  
  
void loop() {
  teclado();

}

void teclado(){
  for(int i=0; i<=2; i++){
  digitalWrite(i+2 , HIGH);
  
    for(int t=0; t<=4; t++){
      if(digitalRead(t+5) == HIGH);{
    c++;
      
  if(c==1){
    x=arrTeclado[t][i];
    Serial.print("nuemro1: ");
    Serial.println(x);
    }else if(c==2){
      y==arrTeclado[t][i];
      Serial.print("numero1: ");
      Serial.println(y);
      Serial.print("");
      Serial.println("ingrese la contra");
      } else if (c==3){
        op=arrTeclado[t][i];
        if (op<=3){
          Serial.print("opcion: ");
          Serial.println(op);
          } else {
            Serial.print("opcion erronea"); 
          }

        //  operar();
      }else{
              Serial.println("No se pueden ingresar mas numeros");
      }
              delay(300);
          }
    }
  
  digitalWrite(i+2,LOW);
  }
}
  
