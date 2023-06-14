#include <stdio.h>

int main ()
{
    int a = 10;
    int* p = &a;
    int* p2 = p;

    *p2 = 40;
    a = 16;

    printf ("El valor a %d\n", a);
    printf ("Direccion memoria de a %d\n", &a);
    printf ("El valor p %d\n", *p);
    printf ("Direccion memoria de p %d\n", p);
    printf ("El valor p2 %d\n", *p2);
    printf ("Direccion memoria de p2 %d\n", p2);
}    