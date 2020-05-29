                 /*Pin 1, 2, 3 son salidas (leds). Pin 5, 6, 7 botones del ascensor. Pin 8 Baja . Pin 9 Sube  */
                       
/*                
int pb=2;
int p1=3;
int p2=4*/
int Baja=8;
int Sube=9;
int botones[3]={5,6,7};
int plantas[3]={2, 3, 4};
int almacenar[3];
int i;
int recargar;
void setup() {
  //Configuramos los pisos del ascensor como salidas
  pinMode(plantas[0], OUTPUT);
  pinMode(plantas[1], OUTPUT);
  pinMode(plantas[2], OUTPUT);
  //Configuramos los interruptores del ascensor como entradas
  pinMode(botones[0], INPUT);
  pinMode(botones[1], INPUT);
  pinMode(botones[2], INPUT);
  //Confuguramos la dirección del ascensor como salida
  pinMode(Baja, OUTPUT);
  pinMode(Sube, OUTPUT);
  
}

void loop() {
  agregarPlanta();
  //revisarPulsadores();

  fijarRecorrido();

}
void fijarRecorrido(){
  if (digitalRead (botones[0])==1){
    digitalWrite(plantas[0],HIGH);
  }
  //else digitalWrite(plantas[0],LOW);
 if (botones[1]==1){
    digitalWrite(plantas[1],HIGH);
 }
 //else{digitalWrite(plantas[1],LOW);}
 if (botones[2]==1){
    digitalWrite(plantas[2],HIGH);
 }
 //else{digitalWrite(plantas[2],LOW);}
  
  }









void agregarPlanta(){}

/*
void revisarPulsadores(){

 
  
    if(digitalRead(botones[0])==1){
      almacenar[i]=almacenar[2];
      
    }
    if (digitalRead[1]==1){

      almacenar[i]=almacenar[3];
      
    }
    if (digitalRead[2]==1){

      almacenar[i]=almacenar[4];
      
    }
  
  }*/
