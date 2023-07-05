#define maximoequipos 10

struct Equipo{
    char nombre[50];
    int puntos;
};

struct Equipo equipos[maximoequipos];

void ingresarEquipos(struct Equipo equipos[maximoequipos]);
void archivoEquipos(struct Equipo equipos[maximoequipos], int numEquipos);
