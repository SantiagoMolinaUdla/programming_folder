#include <stdio.h>
int maze[5][5]={
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void imprimirlaberinto() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

int movimientovalido(int fila, int columna) {
    if (fila >= 0 && fila < 5 && columna >= 0 && columna < 5 && maze[fila][columna] == 0) {
        return 1;//valido
    }

    return 0;//invalido 
}



