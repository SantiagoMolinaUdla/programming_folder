#ifndef RESULTADOS_H
#define RESULTADOS_H

#include "ingreso.h"

void calcularPuntos(Equipo equipos[MAX_EQUIPOS]);

void mostrarResultados(Equipo equipos[MAX_EQUIPOS]);
void mostrarTablaPuntos(Equipo equipos[MAX_EQUIPOS]);
void determinarGanador(Equipo equipos[MAX_EQUIPOS]);

#endif /* RESULTADOS_H */
