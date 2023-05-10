#include <stdio.h>
#include <string.h>
#include <funciones.h>

int login();
void menu();
void realizarReciclaje();
float calcularPrecioMaterial(char material[20], float cantidad);
float calcularBono(float total);
void interactuarRedSocial();

int login(){
    char usuario[200];
    int contrasena;
    for (int i = 0; i < 3; i++)
    {
    printf("Coloque el usario de la cuenta\n");
    scanf("%s", &usuario);
    printf("Coloque el password\n");
    scanf("%d", &contrasena);
        if (strcmp(usuario, "Jean") == 0 && contrasena == 2023)
    {
        printf("El usuario y password es correcto.\n");
        return 1;
    }
    else if (strcmp(usuario, "Mathias") == 0 && contrasena == 2024)
    {
        printf("El usuario y password es correcto.\n");
        return 1;
    }
    else if (strcmp(usuario, "Wilson") == 0 && contrasena == 2025)
    {
        printf("El usuario y password es correcto.\n");
        return 1;
    }
    else{
        printf("El usuario o password es incorecto intente otravez.\n");
    }

    }
    printf("Numero de intentos excedidos, el programa se cerrara.");
    return 0;
}

int main (){
    int Acceso;
    Acceso = login();
    if (Acceso == 1)
    {
        void menu();
    }
    return 0;
}

void menu(){
    int opcion;
    printf("---Menu---\n");
    printf("1 Reciclaje\n");
    printf("2 Red social\n");
    printf("3.Salir\n");
    scanf("%d", &opcion);
    do{
        switch (opcion)
    {
    case 1:
        void realizarReciclaje();
        break;
    case 2:
        void interactuarRedSocial();
        break;
    case 3:
        printf("Saliendo del programa.\n");
        break;
    default:
        printf("No hay esa opcciones, escoja una de las opccionez.\n");
        break;
    }
    } while (opcion != 3);
    return 0;
}

void realizarReciclaje(){ 
    char material[20];
    float cantidad, total, bono;
    for (int e = 1; e < 5; e++)
    {
        printf("---Material---\n");
        printf("P=papel\n");
        printf("V=vidrio\n");
        printf("M=metal\n");
        printf("p=Plastico\n");
        scanf("%s", &material);
        printf("Escoja la cantidad de material que dece en kilogramos:\n");
        scanf("%d", &cantidad);
        total = calcularPrecioMaterial( material[20], cantidad);
        if (total > 0){
            bono = calcularBono(total);
            printf("El costo final con el bono incluido es de %.2f\n", bono);
        }
        
    }
    return 0;
}

float calcularPrecioMaterial(char material[20], float cantidad){
    float precio;
    if (strcmp(material, "P") == 0) {
        precio = 0.1;
    } else if (strcmp(material, "V") == 0) {
        precio = 0.2;
    } else if (strcmp(material, "p") == 0) {
        precio = 0.15;
    } else if (strcmp(material, "M") == 0) {
        precio = 0.25;
    } else {
        printf("Material no valido\n");
        return 0;
    }
    return precio * cantidad;
}

float calcularBono(float total){
    if (total < 50) {
        return total;
    } else if (total < 100) {
        return total * 1.05;
    } else if (total < 500) {
        return total * 1.1;
    } else {
        return total * 1.2;
    }
}

void interactuarRedSocial(){
    printf("\n--- Interactuar en la red social ---\n");

    for (int i = 1; i <= 5; i++) {
        char mensaje[200];
        int puntuacion;

        printf("Ingrese contenido del mensaje #%d: ", i);
        scanf(" %s", mensaje);
        fflush(stdin);
        printf("Ingrese puntuacion del mensaje (1-5): ");
        scanf("%d", &puntuacion);
        switch (puntuacion) {
            case 1:
            case 2:
                printf("Mensaje negativo: %s\n", mensaje);
                break;
            case 3:
                printf("Mensaje neutral: %s\n", mensaje);
                break;
            case 4:
            case 5:
                printf("Mensaje positivo: %s\n", mensaje);
                break;
            default:
                printf("Puntuacion invalida. Intente de nuevo.\n");
                i--;
                break;
        }
        return 0;
    }
}