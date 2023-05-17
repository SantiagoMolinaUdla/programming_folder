// Crear 3 arreglo de 10 posiciones (numeros), que reste entre posiciones del arreglo 1 y 2, y lo guarde en un arregloresta y los imprima
#include <stdio.h>

int main(void)
{
  int arreglo1[10];
  int arreglo2[10] = {0,1,2,3,4,5,6,7,8,9};
  int arrergloresta[10];

  for (size_t i = 0; i < 10; i++)
  {
    printf ("Ingresar un numero para el arreglo 1\n");
    scanf ("%d",&arreglo1[i]);
  }
  printf ("La resta entro los numeros de A1 y A2 es: ");
  for (size_t i = 0; i < 10; i++)
  {
    arrergloresta[i] = arreglo1[i]-arreglo2[i];
    printf ("%d,",arrergloresta[i]);
  }
}