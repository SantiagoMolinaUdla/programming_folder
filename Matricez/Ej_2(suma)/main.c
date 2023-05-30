//suma de matricez
#include <stdio.h>
#define filas 3
#define columnas 3

void lecturaMatrices (int fil, int col, int matriz1[fil][col]);
void impresionMatrices (int fil, int col, int matriz1 [fil][col]);
void sumaMatrices (int fil, int col, int matrizA[fil][col], int matrizB[fil][col], int matrizR[fil][col]);


int main(void)
{
    int matriz[filas][columnas];
    int matrizB[filas][columnas]=
         {
           {1,2,3},
           {4,5,6},
           {7,8,9}     
         };
    int matrizResultado[filas][columnas];
         
    lecturaMatrices (filas, columnas, matriz);

    sumaMatrices (filas, columnas, matriz, matrizB, matrizResultado);

    impresionMatrices (filas, columnas, matrizResultado);
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

void sumaMatrices (int fil, int col, int matrizA[fil][col], int matrizB[fil][col], int matrizR[fil][col])
{
    for (int i=0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}