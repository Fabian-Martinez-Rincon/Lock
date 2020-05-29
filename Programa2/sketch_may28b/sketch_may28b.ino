
int abajo=8, arriba=9; //Leds que indican la direccion de del ascensor
int pisos_requeridos[3]; // pisos en los que hay una llamada guardados en un array
int pisos_requeridos_bajada[3]; // pisos que an sido requeridos solo para bajar
int pisos_requeridos_subida[3]; // pisos que an sido requeridos solo para subir
int pulsadores[3]={5,6,7};
int plantas[3]={2, 3, 4};


void setup() {
  pinMode(pulsadores[0], INPUT);  
  pinMode(pulsadores[1], INPUT); 
  pinMode(pulsadores[2], INPUT);
  pinMode(arriba, OUTPUT);
  pinMode(abajo, OUTPUT);
  pinMode(plantas[0],OUTPUT);
  pinMode(plantas[1],OUTPUT);
  pinMode(plantas[2],OUTPUT);
}
void loop() {

agregar_piso();
definir_direccion();
mover_ascensor();













  

}
