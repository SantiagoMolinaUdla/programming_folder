#include <stdio.h>
#include <string.h>
#include "Ingreso.h"

void ingresarEquipos(struct Equipo equipos[maximoequipos]) {
    int N_Equipos;

    printf("Cuantos equipos desea colocar?\n");
    scanf("%d", &N_Equipos);

    for (int i = 0; i < N_Equipos; i++) {
        printf("Ingrese el nombre de un equipo (Sin espacios por favor):\n");
        scanf("%s", equipos[i].nombre);
    }
}

void archivoEquipos(struct Equipo equipos[maximoequipos], int numEquipos) {
    FILE *archivo;
    archivo = fopen("Equipos.txt", "w");

    if (archivo == NULL) {
        printf("No se puede guardar en el archivo.\n");
    } else {
        for (int i = 0; i < numEquipos; i++) {
            fprintf(archivo, "%s\n", equipos[i].nombre);
        }
        printf("Se ha guardado correctamente en el archivo.\n");
        fclose(archivo);
    }
}

int main() {
    struct Equipo equipos[maximoequipos];
    
    ingresarEquipos(equipos);
    archivoEquipos(equipos, maximoequipos);

    return 0;
}
