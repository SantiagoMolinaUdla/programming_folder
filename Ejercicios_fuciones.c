#include <stdio.h>

int main(void)
{
   do
   {
     float radiocirculo, basetriangulo, alturatriangulo,ladostriangulos;
     int opcion;
     printf ("Seleccionar que figura geometrica desea calcular su área y su perímetro  \n");
     printf ("---MENU---\n");
     printf ("1. CÍRCULO\n");
     printf ("2. TRIÁNGULO\n");
     printf ("3. RECTÁNGULO\n");
     printf ("4. CUADRADO\n");
     printf ("5. TRAPECIO\n");
     printf ("6. SALIR\n");

     switch (opcion)
     {
     case 1:
        printf ("Ingresar el valor del radio del circulo:");
        scanf ("%f",&radiocirculo);
        break;
     case 2:
        printf ("Ingresar el valor de la base del triangulo:");
        scanf ("%f",&basetriangulo);
        printf ("Ingresar el valor de la altura del triangulo:");
        scanf ("%f",&basetriangulo);
        printf ("Ingresar el valor de los lados del triangulo:");
        scanf ("%f",&ladostriangulos);   
        break;
     case 3:
        printf ("Ingresar el valor del radio del circulo:");
        scanf ("%f",&radiocirculo);
        break;
     
     default:
        break;
     }

     
   } while (/* condition */);
   
   return 0;
}
//programa incompleto
