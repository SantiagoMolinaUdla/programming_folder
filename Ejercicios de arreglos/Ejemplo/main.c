#include <stdio.h>

int main(void)
{
    int arreglo [5];

    for (size_t i = 0; i < 5; i++)
    {
        printf ("Ingresar un numero\n");
        scanf ("%d", &arreglo[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf ("El numero %d\n", arreglo[i]);
    }
}