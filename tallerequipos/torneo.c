#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "torneo.h"

void ingresarResultados(Equipo equipos[MAX_EQUIPOS]) {
    int opcion;
    printf("¿Desea ingresar manualmente los resultados de los partidos o generarlos aleatoriamente?\n");
    printf("1. Desea ingresar los resultados\n");
    printf("2. Generar aleatoriamente\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

    FILE *archivoResultados;
    archivoResultados = fopen("resultados.txt", "w");

    if (archivoResultados == NULL) {
        printf("No se pudo abrir el archivo resultados.txt\n");
        return;
    }

    if (opcion == 1) {
        printf("Ingrese los resultados de los partidos:\n");

        for (int i = 0; i < MAX_EQUIPOS; i++) {
            for (int j = i + 1; j < MAX_EQUIPOS; j++) {
                int goles_equipo_i, goles_equipo_j;
                printf("%s vs %s\n", equipos[i].nombre, equipos[j].nombre);
                printf("Goles de %s: ", equipos[i].nombre);
                scanf("%d", &goles_equipo_i);
                printf("Goles de %s: ", equipos[j].nombre);
                scanf("%d", &goles_equipo_j);

                fprintf(archivoResultados, "%s %s %d %d\n", equipos[i].nombre, equipos[j].nombre, goles_equipo_i, goles_equipo_j);
            }
        }
    } else if (opcion == 2) {
        srand(time(NULL));

        printf("Resultados generados aleatoriamente:\n");
        for (int i = 0; i < MAX_EQUIPOS; i++) {
            for (int j = i + 1; j < MAX_EQUIPOS; j++) {
                int goles_equipo_i = rand() % 5; 
                int goles_equipo_j = rand() % 5;

                printf("%s %d - %d %s\n", equipos[i].nombre, goles_equipo_i, goles_equipo_j, equipos[j].nombre);

                fprintf(archivoResultados, "%s %s %d %d\n", equipos[i].nombre, equipos[j].nombre, goles_equipo_i, goles_equipo_j);
            }
        }
    } else {
        printf("Opción no válida. Por favor, ingrese 1 o 2.\n");
    }

    fclose(archivoResultados);
}
