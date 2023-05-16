//Crear un arreglo de 15 posiciones(numeros) del 0 al 14 y buscar si numero ingresado por el usuario esta en el arreglo (Busqueda secuencial)
#include <stdio.h>

int main(void)
{
    int arreglo[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int busqueda;
    int encontrado;
    int i;

    printf ("Ingresar el numero a buscar en el arreglo: \n");
    scanf ("%d",&busqueda);

    for(i = 0; i < 15; i++);
    {
       if (arreglo[i]==busqueda)
       {
          encontrado=1;
       }
    }

    if (encontrado)
    {
       printf ("El numero %d si esta en el arreglo");
    }else{
       printf ("El numero %d no esta en el arreglo");
    }
}