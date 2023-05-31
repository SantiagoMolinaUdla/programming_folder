#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) 
{
    for (int i=0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cuadrado[i][j] = cuadradoA[i][j] + cuadradoB[i][j];
        }
    }
    return 0;
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) 
{
    for(filas=0;filas<3;filas++)
    {
      for(columnas=0;columnas<3;columnas++)
     {
        suma+=cuadradoA[filas][columnas];
     }
    }

    for(columnas=0;columnas<3;columnas++)
    {

      for(filas=0;filas<3;fila++)
      {
        suma+=cuadradoA[filas][columnas];
      }
    }

    for(filas=0;filas<4;filas++)
    {
      for(columnas=0;columnas<4;columnas++)
      {
        suma+=cuadradoB[filas][columnas];
      }
    }

    for(columnas=0;columnas<4;columnas++)
    {

      for(filas=0;filas<4;fila++)
      {
        suma+=cuadradoB[filas][columnas];
      }
    }
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) 
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf ("%d", cuadrado[i][j]);
        }

        printf("\n");
    }
}
