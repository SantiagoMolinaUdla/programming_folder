int login(){
    char usuario[200];
    int contrasena;
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
    return opcion;
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

void interactuarRedSocial(){
    printf("\n--- Interactuar en la red social ---\n");

    for (int i = 1; i <= 5; i++) {
        char mensaje[200];
        int puntuacion,stdin;

        printf("Ingrese contenido del mensaje %d: ", i);
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
