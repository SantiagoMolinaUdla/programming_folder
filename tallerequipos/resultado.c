#include <stdio.h>
#include <string.h>
#include "resultado.h"
#include "torneo.h"

void calcularPuntos(Equipo equipos[MAX_EQUIPOS]) {
    FILE *archivoResultados;
    archivoResultados = fopen("resultados.txt", "r");

    if (archivoResultados == NULL) {
        printf("No se pudo abrir el archivo resultados.txt\n");
        return;
    }

    char nombreEquipo1[MAX_NOMBRE_EQUIPO], nombreEquipo2[MAX_NOMBRE_EQUIPO];
    int golesEquipo1, golesEquipo2;

    for (int i = 0; i < MAX_EQUIPOS; i++) {
        equipos[i].puntos = 0; 
    }

    while (fscanf(archivoResultados, "%s %s %d %d", nombreEquipo1, nombreEquipo2, &golesEquipo1, &golesEquipo2) == 4) {
        int encontrado1 = 0, encontrado2 = 0;

        for (int i = 0; i < MAX_EQUIPOS; i++) {
            if (strcmp(equipos[i].nombre, nombreEquipo1) == 0) {
                encontrado1 = 1;
                if (golesEquipo1 > golesEquipo2) {
                    equipos[i].puntos += 3;
                } else if (golesEquipo1 == golesEquipo2) {
                    equipos[i].puntos += 1;
                }
            }
            if (strcmp(equipos[i].nombre, nombreEquipo2) == 0) {
                encontrado2 = 1;
                if (golesEquipo2 > golesEquipo1) {
                    equipos[i].puntos += 3;
                } else if (golesEquipo2 == golesEquipo1) {
                    equipos[i].puntos += 1;
                }
            }
        }

        if (!encontrado1 || !encontrado2) {
            printf("Error: uno o ambos equipos del resultado no se encuentran en la lista de equipos.\n");
        }
    }

    fclose(archivoResultados);
}


void mostrarResultados(Equipo equipos[MAX_EQUIPOS]) {
    FILE *archivoResultados;
    archivoResultados = fopen("resultados.txt", "r");

    if (archivoResultados == NULL) {
        printf("No se pudo abrir el archivo resultados.txt\n");
        return;
    }

    printf("Resultados:\n");

    char nombreEquipo1[MAX_NOMBRE_EQUIPO], nombreEquipo2[MAX_NOMBRE_EQUIPO];
    int golesEquipo1, golesEquipo2;

    while (fscanf(archivoResultados, "%[^,],%[^,],%d,%d\n", nombreEquipo1, nombreEquipo2, &golesEquipo1, &golesEquipo2) != EOF) {
        printf("%s %d - %d %s\n", nombreEquipo1, golesEquipo1, golesEquipo2, nombreEquipo2);
    }

    fclose(archivoResultados);
}


void mostrarTablaPuntos(Equipo equipos[MAX_EQUIPOS]) {
    for (int i = 0; i < MAX_EQUIPOS - 1; i++) {
        for (int j = 0; j < MAX_EQUIPOS - i - 1; j++) {
            if (equipos[j].puntos < equipos[j + 1].puntos) {
                Equipo temp = equipos[j];
                equipos[j] = equipos[j + 1];
                equipos[j + 1] = temp;
            }
        }
    }

    printf("\nTabla de Puntos:\n");
    printf("Equipo\t\tPuntos\n");
    printf("--------------------\n");

    for (int i = 0; i < MAX_EQUIPOS; i++) {
        printf("%s\t\t%d\n", equipos[i].nombre, equipos[i].puntos);
    }
}

void determinarGanador(Equipo equipos[MAX_EQUIPOS]) {
    int maxPuntos = -1;
    int indiceGanador = -1;

    for (int i = 0; i < MAX_EQUIPOS; i++) {
        if (equipos[i].puntos > maxPuntos) {
            maxPuntos = equipos[i].puntos;
            indiceGanador = i;
        }
    }

    if (indiceGanador != -1) {
        printf("\n¡El ganador del torneo de puro equipo malo es: %s con %d puntos!\n", equipos[indiceGanador].nombre, maxPuntos);
    } else {
        printf("\nNo hay un ganador definido ya que no se han ingresado resultados o no se han calculado los puntos.\n");
    }
}