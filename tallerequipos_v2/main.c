#include <stdio.h>
#include <string.h>
#include "ingreso.h"
#include "torneo.h"
#include "resultado.h"

int main() {
    struct Equipo equipos[maximoequipos];

    printf("Ingrese los nombres de los 4 EQUIPOS chafas:\n");
    ingresarEquipos(equipos);

    FILE *archivoEquipos;
    archivoEquipos = fopen("equipos.txt", "w");

    if (archivoEquipos == NULL) {
        printf("No se pudo abrir el archivo equipos.txt\n");
        return 1;
    }

    for (int i = 0; i < maximoequipos; i++) {
        fprintf(archivoEquipos, "%s\n", equipos[i].nombre);
    }

    fclose(archivoEquipos);
    printf("Nombres de los equipos almacenados en equipos.txt\n");


    ingresarResultados(equipos);

    calcularPuntos(equipos);

    mostrarResultados(equipos);

    mostrarTablaPuntos(equipos);
    
    determinarGanador(equipos);

    int opcion;
    char seguir;
   
    do {
        printf("Ingrese el numero 1 para empezar un nuevo torneo de equipos:\n");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                ingresarEquipos(equipos);
                ingresarResultados(equipos);
                calcularPuntos(equipos);
                mostrarResultados(equipos);
                mostrarTablaPuntos(equipos);
                determinarGanador(equipos);
                break;
            default:
                printf("Opción inválida. Ingrese el número 1 para empezar un nuevo torneo de equipos:\n");
                break;
        }
        
        printf("¿Desea continuar con un nuevo torneo (s/n)?\n");
        scanf(" %c", &seguir);

    } while (seguir != 'n');

    return 0;
}