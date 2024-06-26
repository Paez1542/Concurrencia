/*****************************************
Para su debida ejuecucion:gcc mv_v01.c 
./a.out

* Fecha: 04-04-24
* Autor: Juan Esteban Paez Alfonso
* Materia: Sistemas Operativos
* Tema: Concurrencia
* Objetivo: Hacer una metodologia para la implementacion de la multiplicacion de matrices.
* La idea principal es construir paso a paso la *implementacion para hacer uso de la biblioteca PTHREAD se *implementa el algoritmo clasico de multiplicacion de *matrices para matrices cuadradas es decir, la dimension de *filas es igual a al dimension de columnas. Acontinucaion se decriben los pasos:
*     - Reserva de memoria
*     - Creacion de punteros para matrices de tipo doble
*     - Asignacion de memoria
*     - Ingreso de argumentos de netrada(Dimension matrriz, numero de hilos)

*****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>

#define RESERVA (1024*128*64*8)

static double MEM_CHUNK[RESERVA];


int main(int argc, char *argv[]) {
  if(argc <= 2){
    printf("Error: Ingrese la dimension de la matriz y el numero de hilos\n");
     printf("\n\t $ejecutable.exe DIM NumHilos\n");
    return -1;

  };

  int N = (int) atof(argv[1]);
  int H = (int) atof(argv[2]);
  double *mA, *mB, *mC;
   mA = MEM_CHUNK;
   mB = mA + N*N;
   mC = mB + N*N;


   printf("\n+Fin del programa...............!\n");
  
  return 0;
}