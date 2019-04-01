//bibliotecas
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//prototipos
void *ReservaMemoria(int cantidad);
//macros
#define FILS 15
#define COLS 5
//funcion principal
void main()
{
	clrscr(); highvideo(); randomize();
	int *matriz;//matriz
	int *pmat; //puntero a la matriz
	int i,j;
	matriz = (int*)ReservaMemoria(FILS*COLS*sizeof(int));
	printf("\nmuestra matriz aleatoria es:\n");
  //CARGA Y MUESTRA MATRIZ en forma SUBINDEXADA
  for(i = 0; i < FILS; i++)
  {   for( j = 0; j < COLS; j++)
      printf("%4d",*(matriz+i*FILS+j)=100+random(900));//asigna e imprime
      printf("\n");//pasa a la siguiente fila
  }
  printf("\n");
  getch();
  pmat = matriz;
  for(i = 0; i < FILS; i++)
  {   for( j = 0; j < COLS; j++)
      printf("%4d",*(pmat+i*FILS+j)=100+random(900));//asigna e imprime
      printf("\n");//pasa a la siguiente fila
  }
  getch();
  system("pause");
}

void *ReservaMemoria(int cantidad)
{
	void *pAux;

	pAux= malloc(cantidad);
	if (pAux==NULL){
		cprintf("No es posible reservar memoria\r\n\r\n");
		getch(); 
		exit(1);
	}
	return pAux;
}
