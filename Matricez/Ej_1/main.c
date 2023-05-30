//leer dos matrices
#include <stdio.h>
#define filas 3
#define columnas 3

void lecturaMatrices (int fil, int col, int matriz1[fil][col]);
void impresionMatrices (int fil, int col, int matriz1 [fil][col]);

int main(void)
{
    int matriz[filas][columnas];
    int matrizB[2][2]=
         {
           {1,2},
           {3,4}   
         };


    lecturaMatrices (filas, columnas, matriz);

    impresionMatrices (filas, columnas, matriz);
    impresionMatrices (2, 2, matrizB);
}

void lecturaMatrices (int fil, int col, int matriz1[fil][col])
{
    //lectura de matrices
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf ("Ingresar el numero en %d,%d \n",i,j);
            scanf ("%d",&matriz1[i][j]);
        }
    }
}

void impresionMatrices (int fil, int col, int matriz1 [fil][col])
{
    //impresion de matrices
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf ("%d", matriz1[i][j]);
        }

        printf("\n");
    }
}