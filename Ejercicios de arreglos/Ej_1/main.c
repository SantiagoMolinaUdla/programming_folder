// Crear 1 arreglo de 10 posiciones (numeros) que lea positivos y negativos y sume los numeros positivos y los imprima
#include <stdio.h>

int main(void)
{
    int arreglo [10];
    int suma=0;
   
    for (size_t i = 0; i < 10; i++)
    {
        printf ("Ingresar un numero\n");
        scanf ("%d",&arreglo[i]);
    }
   
    for (size_t i = 0; i < 10; i++)
    {
       if (arreglo[i] > 0)
       {
       suma+=arreglo[i];
       }
    }

    printf ("La suma de los positivos es: %d\n",suma);   
}

