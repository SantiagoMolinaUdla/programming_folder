#include <stdio.h>

void sumaSinPunteros(int a, int b)
{
    int suma = a + b;
    printf ("La direccion de suma es: %d\n", &suma);
    printf ("La suma es: %d\n", suma);
    printf ("La direccion de suma es: %d\n", &suma);
    printf ("La suma es: %d\n", suma);
}

void sumaConPunteros(int *a, int *b)
{
    int suma = *a + *b;
    printf ("La direccion de suma es: %d\n", &suma);
    printf ("La suma es: %d\n", suma);
    printf ("La direccion de suma es: %d\n", &suma);
    printf ("La suma es: %d\n", suma);
}

int main(void)
{
    int a = 10;
    int b = 20;

    sumaSinPunteros(a,b);
    sumaConPunteros(&a,&b);
}