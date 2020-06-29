//Variables que son un desastre.
#include <Servo.h>
#include <LiquidCrystal.h>
Servo myservo;
int parametro2,parametro,numero,cuatroN,i,j,k,boton,r,b,z,util,bien,p=0;
bool Almaceno=false;
int tolerancia = 3;
bool CambiaContra=false;
bool cambiar=false;
int contra[4];
int correcta[4]={3,3,3,3};
int CodEspecial[4]={4,8,4,8};
bool pos=false;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
int entrada_analogica_teclado = A1;
int valor_analogico_teclado = 0;
int estado_lcd=1;

//Parte de configuracion de pines
void setup(){
  Serial.begin(9600);
  myservo.attach(10,750,1235);
  lcd.begin(16,2);
  lcd.print("Arduino");
  Serial.print("Arduino");
  lcd.setCursor(0,1);
  Serial.println("");
  Serial.println("Cerradura");
  delay(500);
  lcd.clear();
  lcd.print("Ingresar Codigo Especial:");
  
  Serial.println("Ingresar Codigo Especial:");
  lcd.setCursor(0,1);
}

void loop(){
  if(analogRead(entrada_analogica_teclado)>10){ //mientras la tension que este en el pin analogico sea menor a 10 se ejecuta lo siguiente
    valor_analogico_teclado = analogRead(entrada_analogica_teclado);
    while(analogRead(entrada_analogica_teclado)>10) delay(1);
    
   leerTeclado();     //Leo el valor de tension de cada pin al ser pulsado.
   CargarTeclado();  //Cargo el teclado y uso un parametro que me devuelve un valor
   CuatroNumeros();  //Hay un contador en los pulsadores y en cuanto llegue a 4 se inicializa esta funcion
   Abrir();           //En cuanto el contador que compara los dos arreglos sea 4, se abre el servo y muestra en el lcd "correcto"
   if(cambiar==true){ //La funcion abrir pone "cambiar" como true y se ejecuta la funcion siguiente 
    RecorrerContra(); //Almacena en el arreglo prestablecido, la contaseña que ingresamos previamente
        //En esta funcion pone "almaceno" en verdadero y  se activa la configuracion de otro declado en el que esta la opcion de ingresar
        //el codigo especial, o ingresar nuestra contraseña. En el caso del codigo especial sigue como antes y en el caso de ingresar nuestro
        //codigo, se activa la funcion del servo motor
    }
   
  }
  
}

void leerTeclado(){   // Tomo los pulsadores segun rl valor de tension en pines
  if (valor_analogico_teclado<=(551+tolerancia) && valor_analogico_teclado>=(551-tolerancia)) boton = 0;
    if (valor_analogico_teclado<=(865+tolerancia) && valor_analogico_teclado>=(865-tolerancia)) boton = 1;
    if (valor_analogico_teclado<=(650+tolerancia) && valor_analogico_teclado>=(650-tolerancia)) boton = 2;
    if (valor_analogico_teclado<=(508+tolerancia) && valor_analogico_teclado>=(508-tolerancia)) boton = 3;
    if (valor_analogico_teclado<=(803+tolerancia) && valor_analogico_teclado>=(803-tolerancia)) boton = 4;
    if (valor_analogico_teclado<=(614+tolerancia) && valor_analogico_teclado>=(614-tolerancia)) boton = 5;
    if (valor_analogico_teclado<=(486+tolerancia) && valor_analogico_teclado>=(486-tolerancia)) boton = 6;
    if (valor_analogico_teclado<=(736+tolerancia) && valor_analogico_teclado>=(736-tolerancia)) boton = 7;
    if (valor_analogico_teclado<=(574+tolerancia) && valor_analogico_teclado>=(574-tolerancia)) boton = 8;
    if (valor_analogico_teclado<=(460+tolerancia) && valor_analogico_teclado>=(460-tolerancia)) boton = 9;
    if (valor_analogico_teclado<=(698+tolerancia) && valor_analogico_teclado>=(698-tolerancia)) boton = 41;
    if (valor_analogico_teclado<=(445+tolerancia) && valor_analogico_teclado>=(445-tolerancia)) boton = 42;
    
  
  }
  
 void  CargarTeclado(){

        if (CambiaContra==false){
                    //cargamos el teclado y cuando llega a 4 se reinicia
    if (boton){
      contra[i++]=boton;
      lcd.print(boton);
      Serial.print(boton);}
    }
    else{
      if (boton){
      correcta[p++]=boton;
      lcd.print(boton);
      Serial.print(boton);
      //Serial.print("kes");
      }
      
      }
 }
 
void RecorrerContra(){
//  int p;
   lcd.clear();
  
  lcd.print("Su nueva es:");
  lcd.setCursor(0,1);
  //Serial.println(p);
  
  if((p==4)&&(CambiaContra==true)){
    cambiar=false;
    CambiaContra=false;
    p=0;
    lcd.setCursor(0,1);
    for(int e=0;e<4;e++){
      
      correcta[e];
      Serial.println( correcta[e]);
      
      lcd.print(correcta[e]);
      
      }
      delay(2000);
       lcd.clear();
       lcd.print("Codigo Especial:");
        lcd.setCursor(0,1);
       int cero2=0;
  util=cero2;
  Almaceno=true;
    }
  //Serial.println(Almaceno);
  }
    
void CuatroNumeros(){// En cuanto la contraseña tenga 4 digitos se ejecuta esta funcion
  int b;
  if (i==4){
    int b=0;
      delay(200);
      Serial.println("");  
      if(Almaceno==false){            //Recorremos tanto el arreglo de "contra" como el de "correcta"
      for (j=0;j<=3;j++){     //comparamos si los numerods en posiciones de ambos arreglos son iguales
     //   Serial.print(contra[j]);
     if (contra[j]==CodEspecial[j]){
      Serial.println("Digito Bien");
      k++;
      b++;
      Serial.println(k);
      Serial.println(b);
      }   //error si el numero ingresado es 8888 ya que el ultimo digito al ser correcto no se reinicia la variable
      else{
              //Cada vez que el numero ingresado este mal, se reinicia la variable k asi no se acumulan estos datos para un futuro
        k=0;
        contra[k]=0;
        Serial.println("Digito Mal");
        lcd.clear(); 
        b++;
        Serial.println(b);
        if(b==4){ //Cuando se opriman 4 veces el boton, no importa de que lado, muesta que esta mal y se reinicia la variable
          int reset=0;
          b=0;
        lcd.print("Todo mal");
        Serial.println("Todo Mal");
        delay(300);
        lcd.clear();
        lcd.print("Codigo Especial:");
        lcd.setCursor(0,1);
       
        }
        }}
        
           }    else{NuevoTeclado();}

  int reset=0;
      i=reset;}
  }

void Abrir(){// es correcto y restauro la variable k para empezar de nuevo
  if (k==4){  //cuando las cuatro posiciones del arreglo coincidad con las del condigo especial se ejecuta
    lcd.clear();
    lcd.print("Correcto");
    delay(1000);
    lcd.clear();
       // lcd.print("Nueva Contra:");
        int util=0;
        //util++;
        cambiar=true;
        CambiaContra=true;
         Serial.println( "Su Nueva Contra es:");
         
    int restaurar=0;
    k=restaurar;
    b=restaurar;
    }

  }
  
  

   void NuevoTeclado(){
      
      for (j=0;j<=3;j++){     //comparamos si los numerods en posiciones de ambos arreglos son iguales
    
     if ((contra[j]==CodEspecial[j])|(contra[j]==correcta[j])){
      if(contra[j]==correcta[j]){
        Serial.println("bien");
        bien++;
        if(bien==4){
          ServoMotor();
          bien=0;
          }
        }
         if (contra[j]==CodEspecial[j]){
      Serial.println("Digito Bien");
      k++;
      b++;
      Serial.println(k);
      Serial.println(b);
      }}   //error si el numero ingresado es 8888 ya que el ultimo digito al ser correcto no se reinicia la variable
      else{
              //Cada vez que el numero ingresado este mal, se reinicia la variable k asi no se acumulan estos datos para un futuro
        k=0;
        contra[k]=0;
        Serial.println("Digito Mal");
        lcd.clear();
        
        b++;
       // Serial.println(k);
        Serial.println(b);
        if(b==4){ //Cuando se opriman 4 veces el boton, no importa de que lado, muesta que esta mal y se reinicia la variable
          int reset=0;
          b=0;
        lcd.print("Todo mal");
        Serial.println("Todo Mal");
        delay(300);
        lcd.clear();
        lcd.print("Codigo Especial:");
        lcd.setCursor(0,1);
       
        }
        }
        
        }
        
           } 

 void ServoMotor(){
        lcd.clear();
        lcd.print("Servo Activado");
        pos=true;
        Serial.println("Servo Activado");
        if(pos==true){ myservo.write(pos);
        delay(4000);
        pos=false;}
        
        lcd.clear();
        lcd.print("Codigo Especial:");
        lcd.setCursor(0,1);
        }
      
      /* void  CargarTeclado2(){
       while(p<4)       {    
    if (boton){
      correcta[p++]=boton;
      lcd.print(boton);
      Serial.print(boton);}
    }}*/
