//Crear un arreglo de 15 posiciones(numeros) del 0 al 14 y buscar si numero ingresado por el usuario esta en el arreglo (Busqueda secuencial)
#include <stdio.h>

int busqueda (int arregloBuscar[], int tamanio, int numBuscar);

int main(void)
{
   int numBus;
   int arreglo[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
   int tamanio = sizeof(arreglo) / sizeof(arreglo[0]);

   printf ("Ingresar el numero a buscar en el arreglo: \n");
   scanf ("%d", &numBus);

   int resultado = busqueda(arreglo, tamanio, numBus);

   if (resultado == -1)
   {
      printf("Numero no encontrado");
   }else{
      printf ("Numero encontrado en el indice %d", resultado);
   }
}
   
int busqueda(int arregloBuscar[], int tamanio, int numBuscar){

   for(size_t i = 0; i < tamanio; i++)
   {
      if (arregloBuscar[i] == numBuscar){
      return i;
      }
   }
   return -1;
}