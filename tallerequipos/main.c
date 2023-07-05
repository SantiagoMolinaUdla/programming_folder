#include <stdio.h>
#include "ingreso.h"
#include "torneo.h"
#include "resultado.h"

int main() {
    Equipo equipos[MAX_EQUIPOS];

    printf("Ingrese los nombres de los 4 EQUIPOS chafas:\n");
    ingresarEquipos(equipos);

    FILE *archivoEquipos;
    archivoEquipos = fopen("equipos.txt", "w");

    if (archivoEquipos == NULL) {
        printf("No se pudo abrir el archivo equipos.txt\n");
        return 1;
    }

    for (int i = 0; i < MAX_EQUIPOS; i++) {
        fprintf(archivoEquipos, "%s\n", equipos[i].nombre);
    }

    fclose(archivoEquipos);
    printf("Nombres de los equipos almacenados en equipos.txt\n");


    ingresarResultados(equipos);

    calcularPuntos(equipos);

    mostrarResultados(equipos);

    mostrarTablaPuntos(equipos);
    
    determinarGanador(equipos);

    return 0;
}


