#include <stdio.h>

int main ()
{
    int a = 10;
    int* p = &a;

    printf ("El valor a %d\n", a);
    printf ("Direccion memoria de a %d\n", &a);
    printf ("El valor p %d\n", *p);
    printf ("Direccion memoria de p %d\n", p);
}    