# Cerradura

## Introducción
En este informe veremos tanto la simulación del circuito como la programación en si de una caja fuerte. A continuación, veremos tanto el diagrama de flujo general como el individual.

### Diagrama de flujo General.
![](Images/1.jpg)

### Esquema del Circuito.
![](Images/3.jpg)

Leemos la tensión de los pines de la siguiente forma.
### Leer Pulsadores.
![](Images/4.jpg)

Nos darían estos datos según los pulsadores (de izquierda a derecha).
### Datos de tensión.
![](Images/5.jpg)

### Los datos leidos según la tensión de los pines
![](Images/6.jpg)

Una vez que tenemos todos los datos de los pulsadores, configuramos la lectura de pines

### Lectura de pines
![](Images/7.jpg)

Los botones los cargamos de la siguiente manera (Hay dos partes en las que explicaremos más adelante)

### Cargar Teclado
![](Images/8.jpg)

Mostramos los datos pulsados tanto en el display como en la terminal virtual de Proteus
### Ejemplo
![](Images/9.jpg)

Primero tenemos un código especial, si se inserta el código especial tenemos que ingresar una contraseña de 4 dígitos a nuestro gusto.
Tenemos que comparar dos arreglos. Para esto tenemos que cargar un arreglo llamado contra[] (este es el arreglo que mantiene los datos momentáneos). Una vez cargado este arreglo, tenemos que recorrer tanto el arreglo que nosotros cargamos como el que tenemos como “Código especial”.
Comparamos cada cifra del arreglo dependiendo de la posición. Cada vez una cifra coincida en la misma posición de ambas se aumentará uno en una variable llamada “k”.(Esta en la funcion llamada “CuatroNumeros” al final del informe ).

### Parte de la función
![](Images/10.jpg)

En el caso de que la contraseña sea incorrecta, nos mostraria lo siguiente en pantalla
### Caso incorrecto

![](Images/11.jpg)

En el caso de que los cuatro digitos sean iguales, tanto en valor, como en posición, se ejecutaria la siguiente funcion para poder ingresar una nueva contraseña.

### Función
![](Images/13.jpg)

### Nueva Contraseña
![](Images/12.jpg)


