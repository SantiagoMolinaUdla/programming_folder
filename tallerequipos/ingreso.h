#ifndef EQUIPOS_H
#define EQUIPOS_H

#define MAX_EQUIPOS 4
#define MAX_NOMBRE_EQUIPO 100

typedef struct {
    char nombre[MAX_NOMBRE_EQUIPO];
    int puntos;
} Equipo;

void ingresarEquipos(Equipo equipos[MAX_EQUIPOS]);

#endif


