#include <stdio.h>
#include "player.h"
#include "maze.h"

int main()
{
   int opcion;

   printf ("Te doy la bienvenida al juego del laberinto!\n");
   

 do {
        printf("Ahora selecciona un numero valido del menu\n");
        printf("1. Jugar\n");
        printf("2. Creditos\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                printf ("A jugar\n");
                imprimirlaberinto();

                int filaJugador = 0;
                int columnaJugador = 0;
                int movimientos = 0;
                int fila, columna;
                int ganador = 0;
                int perdedor = 0;
                char movimiento;

                while (!ganador) {
                    printf("\nIngrese la dirección del movimiento: ");
                    scanf(" %c", &movimiento);

                    moverJugador(movimiento);
                    imprimirlaberinto();

                    ganador = verificarGanador();
                }

                printf("\n¡Ganaste!\n");
                if (movimientos <= 8) {
                    printf("Eres un Pro!\n");
                } else if (movimientos <= 15) {
                    printf("Eres novato\n");
                } else {
                    printf("Eres un noob!\n");
                }
                break;

            case 2:

                printf ("Hecho por: Santiago Molina-A00108381\n");
                break;

            case 3:

                printf("Saliendo del juego...\n");
                break;

            default:
            
                printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
                break;
        }
    } while (opcion != 3);
   
   return 0;
}