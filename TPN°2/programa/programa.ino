
int Contador=0;
int x,y,z,w; //x Toma el valor del primer boton ingresado e y toma el valor del segundo
int espera=400;
int op;
void setup() {  //Configuracion de pines 
  Serial.begin (9600);
  for(int i=2; i <=4; i++){
    pinMode(i, OUTPUT);
    }
  for (int e=5;e<=8;e++){
    pinMode(e,INPUT);
    
    }
  Serial.println("Ingresar Contra");
  Serial.println("Son solo 4 numeros");
  

    
}

void loop() {
  teclado();
  /*
Serial.println(x);
delay(1000);
Serial.println(y);
delay(1000);
Serial.println(z);
delay(1000);
Serial.println(w);
delay(1000);*/
}




void teclado(){         //teclado matricial
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  if(digitalRead(5)==HIGH){
    Contador++;
    if (Contador==1){                 //Tomas la posibilidad de cada pulsador en el caso de que se oprima primero, segundo, tercero o cuarto
    Serial.println("1ER NUMERO :1"); 
    x=1;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :1");
    y=1;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :1");
    y=1;
    delay(espera);
      
    }
     else if(Contador==4){
      Serial.println("4TO NUMERO :1");
    y=1;
    delay(espera);
      
    }
    }
  if(digitalRead(6)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :4"); 
    x=4;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :4");
    y=4;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :4");
    y=4;
    delay(espera);
    }
    else if(Contador==4){
      Serial.println("4TO NUMERO :4");
    y=4;
    delay(espera);
    }
    }
  if (digitalRead(7)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :7"); 
    x=7;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :7");
    y=7;
    delay(espera);}
     else if(Contador==3){
      Serial.println("4ER NUMERO :7");
    y=7;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :7");
    y=7;
    delay(espera);}
    }
    if (digitalRead(8)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :*"); 
    x=20;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :*");
    y=20;
    delay(espera);}
    else if(Contador==3){
      
      op=1;
//      operar();
    }
    }
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  if(digitalRead(5)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :2"); 
    x=2;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :2");
    y=2;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :2");
    y=2;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :2");
    y=2;
    delay(espera);}
    }
    if(digitalRead(6)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :5"); 
    x=5;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :5");
    y=5;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :5");
    y=5;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :5");
    y=5;
    delay(espera);}
    }
    if(digitalRead(7)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :8"); 
    x=8;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :8");
    y=8;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :8");
    y=8;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :8");
    y=8;
    delay(espera);}
    }
    if(digitalRead(8)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :0"); 
    x=0;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :0");
    y=0;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :0");
    y=0;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :0");
    y=0;
    delay(espera);}
    }
digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  if(digitalRead(5)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :3"); 
    x=3;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :3");
    y=3;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :3");
    y=3;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :3");
    y=3;
    delay(espera);}
    }
    if(digitalRead(6)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :6"); 
    x=6;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :6");
    y=6;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :6");
    y=6;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :6");
    y=6;
    delay(espera);}
    
    }
    if(digitalRead(7)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :9"); 
    x=9;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :9");
    y=9;
    delay(espera);}
    else if(Contador==3){
      Serial.println("3ER NUMERO :9");
    y=9;
    delay(espera);}
    else if(Contador==4){
      Serial.println("4TO NUMERO :9");
    y=9;
    delay(espera);}
    }if(digitalRead(8)==HIGH){
    Contador++;
    if (Contador==1){
    Serial.println("1ER NUMERO :#"); 
    x=21;
    delay(espera); }
    else if(Contador==2){
      Serial.println("2DO NUMERO :#");
    y=21;
    delay(espera);}
    else if(Contador==3){
      
      op=1;
//      operar();
    }
    }}

    
     


  
  
