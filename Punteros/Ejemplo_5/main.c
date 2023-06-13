#include <stdio.h>

// intercambio de variables
void cambiar(int* p, int* p2)
{
    int temp;
    temp = *p;
    *p = *p2;
    *p2 = temp; 
}

int main ()
{
    int a = 10;
    int b = 20;
    cambiar(&a, &b);

    printf ("El valor a %d\n", a);
    printf ("Direccion memoria de a %d\n", &a);
    printf ("El valor b %d\n", b);
    printf ("Direccion memoria de b %d\n", &b);
}