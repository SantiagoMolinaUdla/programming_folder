#include <stdio.h>
#define filas 3
#define columnas 3

int main(void)
{
    int matriz[filas][columnas];
    
    //lectura de matrices
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf ("Ingresar el numero en  %d,%d \n",i,j);
            scanf ("%d",&matriz[i][j]);
        }
    }
    
    //impresion de matrices
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf ("%d", matriz[i][j]);
        }

        printf("\n");
    }
}
