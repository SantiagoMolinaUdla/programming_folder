#include <stdio.h>
void moverjugador(char direccion) {
    int nuevafila = filaJugador;
    int nuevacolumna = columnaJugador;

    switch (direccion) {
        case 'W':
        case 'w':
            nuevafila--;
            break;
        case 'S':
        case 's':
            nuevafila++;
            break;
        case 'A':
        case 'a':
            nuevacolumna--;
            break;
        case 'D':
        case 'd':
            nuevacolumna++;
            break;
        default:
            printf("Movimiento inválido. Por favor, use WASD.\n");
            return;
    }
    if (movimientovalido(nuevafila, nuevacolumna)) {
        filaJugador = nuevafila;
        columnaJugador = nuevacolumna;
        movimientos++;
        printf("Movimiento realizado.\n");
    } else {
        printf("Movimiento inválido. No puedes ir en esa dirección.\n");
    }
}

int verificarganador() {
    if (filaJugador == 4 && columnaJugador == 4) {
        return 1; // ganador
    }

    return 0; // perdedor
}


