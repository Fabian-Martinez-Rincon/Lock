  
  int PB=2;
  int P1=3;
  int P2=4;
  
  int BOTON1=5;
  int BOTON2=6; 
  int BOTON3=7;
  
  int BAJA=8;
  int SUBE=9;

  int PISOACTUAL=0;
  int 
  
void setup() {
 
 pinMode(BOTON1, INPUT);
 pinMode(BOTON2, INPUT);
 pinMode(BOTON3, INPUT);
 
 pinMode(PB, OUTPUT);
 pinMode(P1, OUTPUT);
 pinMode(P2, OUTPUT);

 pinMode(BAJA, OUTPUT);
 pinMode(SUBE, OUTPUT);
 
}

void loop() {
  revisarPulsadores();
  fijarRecorrido();
  

}


int revisarPulsadores(){
  
  
  
  
  
  
  }

/*
  if(PISOACTUAL==0)
  {
    digitalWrite(PB, HIGH);
  }
  
  if(digitalRead(6)==HIGH)
  {
    if(PISOACTUAL==0)
    {
      digitalWrite(PB, LOW);
      digitalWrite(SUBE, HIGH);
      delay(500);
      digitalWrite(P1, HIGH);
      digitalWrite(SUBE, LOW);
      PISOACTUAL=1;
    }
  }
  
  if(digitalRead(7)==HIGH)
  {
    if(PISOACTUAL==1)
    {
      digitalWrite(P1, LOW);
      delay(500);
      digitalWrite(P2, HIGH);
      PISOACTUAL=2;
    }
  }

  if(digitalRead(5)==HIGH)
  {
    if(PISOACTUAL==2)
    {
      digitalWrite(P2, LOW);
      delay(1000);
      digitalWrite(PB, HIGH);
      PISOACTUAL=0;
    }
  }

  if(digitalRead(6)==HIGH)
  {
    if(PISOACTUAL==2)
    {
      digitalWrite(P2, LOW);
      delay(500);
      digitalWrite(P1, HIGH);
      PISOACTUAL=1;
    }
  }
  
  if(digitalRead(7)==HIGH)
  {
    if(PISOACTUAL==0)
    {
      digitalWrite(PB, LOW);
      delay(1000);
      digitalWrite(P2, HIGH);
      PISOACTUAL=2;
    }
  }

  if(digitalRead(5)==HIGH)
  {
    if(PISOACTUAL==1)
    {
      digitalWrite(P1, LOW);
      delay(500);
      digitalWrite(PB, HIGH);
      PISOACTUAL=0;
    }
  }*/
