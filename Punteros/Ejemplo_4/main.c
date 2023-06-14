#include <stdio.h>

void modificarValor(int *p){
    *p = 80;
}

int main ()
{
    int a = 10;
    modificarValor(&a);
    int b = 50;
    modificarValor(&b);

    printf ("El valor a %d\n", a);
    printf ("Direccion memoria de a %d\n", &a);
    printf ("El valor b %d\n", b);
    printf ("Direccion memoria de b %d\n", &b);
}