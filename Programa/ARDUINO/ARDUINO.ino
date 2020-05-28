                 /*Pin 1, 2, 3 son salidas (leds). Pin 5, 6, 7 botones del ascensor. Pin 8 Baja . Pin 9 Sube  */
                //Empiezo en el piso Pb
int Baja=8;
int Sube=9;
int botones[3]={5,6,7};
int plantas[3]={2, 3, 4};
int almacenar;
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
  revisarPulsadores();
  fijarRecorrido();
  if (digitalRead(botones[0])==1){
    digitalWrite(plantas[0], HIGH);
    }
  else{
  digitalWrite(plantas[0],LOW);
  }
}
void agregarPlanta(){}


void revisarPulsadores(){

  for( i=0; i<3; i ++){
  
   if(digitalRead(botones[0])==1){
    plantas[i]=2;
    }
  if (digitalRead[1]==1){

    plantas[i]=3;
    
    }
  if (digitalRead[2]==1){

    plantas[i]=4;
    
    }
  }
  }


void fijarRecorrido(){}
