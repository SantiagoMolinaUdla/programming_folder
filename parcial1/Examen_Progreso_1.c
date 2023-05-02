#include <stdio.h>
#include <string.h>

// función para comparar usuario y contraseña
int login(char *usuario, char *password);

// función para calcular el precio del material
float calcularPrecioMaterial(char *material, float cantidad);

// función para calcular el bono
float calcularBono(float costoTotal);

// función para el proceso de reciclaje
void reciclaje();

// función para el proceso de publicación en la red social
void redSocial();

int main() {
    char usuario[20], password[20];
    int intentos = 0;
    printf("Ingrese su usuario y contraseña:\n");
    while (intentos < 3) {
        printf("Usuario: ");
        scanf("%s", usuario);
        printf("Password: ");
        scanf("%s", password);
        if (login(usuario, password)) {
            printf("Bienvenido %s\n", usuario);
            break;
        } else {
            intentos++;
            printf("Usuario o contraseña fallidos intento #%d\n", intentos);
        }
    }
    if (intentos == 3) {
        printf("Imposible ingresar\n");
        return 0;
    }

    int opcion;
    do {
        printf("Seleccione una opción:\n");
        printf("1. Realizar reciclaje\n");
        printf("2. Interactuar en la red social\n");
        printf("3. Salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                reciclaje();
                break;
            case 2:
                redSocial();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 3);

    return 0;
}

int login(char *usuario, char *password) {
    // preestablecer usuarios y contraseñas
    char usuarios[3][20] = {"user1", "user2", "user3"};
    char passwords[3][20] = {"pass1", "pass2", "pass3"};

    // buscar usuario y verificar contraseña
    for (int i = 0; i < 3; i++) {
        if (strcmp(usuario, usuarios[i]) == 0) {
            if (strcmp(password, passwords[i]) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

float calcularPrecioMaterial(char *material, float cantidad) {
    float precio;
    if (strcmp(material, "papel") == 0) {
        precio = 0.10;
    } else if (strcmp(material, "vidrio") == 0) {
        precio = 0.20;
    } else if (strcmp(material, "plastico") == 0) {
        precio = 0.15;
    } else if (strcmp(material, "metal") == 0) {
        precio = 0.25;
    }
    return precio * cantidad;
}

float calcularBono(float costoTotal) {
    float bono = 0.0;
    if (costoTotal < 50) {
        bono = 0.0;
    } else if (costoTotal >= 50 && costoTotal < 100) {
        bono = costoTotal * 0.05;
    } else if (costoTotal >= 100 && costoTotal < 500) {
        bono = costoTotal * 0.10;
}    


