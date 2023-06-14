#include <stdio.h>

int main ()
{
    int entero = sizeof(int);
    int real = sizeof(float);
    int caracter = sizeof(char);
    int doble = sizeof(double);
    
    printf ("%d\n", entero);
    printf ("%d\n", real);
    printf ("%d\n", caracter);
    printf ("%d\n", doble);
}