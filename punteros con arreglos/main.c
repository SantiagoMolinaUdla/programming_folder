#include <stdio.h>
void arregloSuma(int *arreglo, int *tamanio, int *suma)
{
    for (int i = 0; i < *tamanio; i++)
    {
        *suma += *arreglo;
        arreglo++;
    }
}

int main(void)
{
    int arreglo [5];
    int tamanio = 5;
    int suma = 0;
    
    for (int i = 0; i < tamanio; i++)
    {
        printf ("Ingrese el num %d\n",i+1);
        scanf ("%d",&arreglo[i]);
    }

    arregloSuma(arreglo, &tamanio, &suma);

    printf ("La suma del arreglo es: %d",suma);
}