#include <stdio.h>

int sonIguales(int *arr1, int *arr2, int tamanio) {
    int i;
    for (i = 0; i < tamanio; i++) {
        if (*(arr1+i) != *(arr2+i)) {
            return 0;  
        }
    }
    return 1;
}

int main() {
    int arr1[5];
    int arr2[5];
    int tamanio = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < tamanio; i++)
    {
        printf ("Ingrese el numero del arreglo 1:\n",i+1);
        scanf ("%d",&arr1[i]);
    }
    for (int i = 0; i < tamanio; i++)
    {
        printf ("Ingrese el numero del arreglo 2:\n",i+1);
        scanf ("%d",&arr2[i]);
    }

    if (sonIguales(arr1, arr2, tamanio)) {
        printf("Los arreglos son iguales.\n");
    } else {
        printf("Los arreglos son diferentes.\n");
    }

    return 0;
}