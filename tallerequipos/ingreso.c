#include <stdio.h>
#include "ingreso.h"

void ingresarEquipos(Equipo equipos[MAX_EQUIPOS]) {
    for (int i = 0; i < MAX_EQUIPOS; i++) {
        printf("Equipo %d: ", i + 1);
        scanf("%s", equipos[i].nombre);
    }
}



