#include <stdio.h>
void sumaPuntero(float *a, float *b, float *suma)
{
    *suma = (*a) + (*b);
}

void restaPuntero(float *a, float *b, float *resta)
{
    *resta = (*a) - (*b);
}

void multiplicacionPuntero(float *a, float *b, float *multiplicacion)
{
    *multiplicacion = (*a) * (*b);
}

void divisionPuntero(float *a, float *b, float *division)
{
    *division = (*a) / (*b);
}

int main(void)
{
    char opcion;
    float a, b;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    
    do
    {
        printf( "\n   >>> MENU CALCULADORA <<<" );
        printf( "\n   1. Sumar dos numeros.");
        printf( "\n   2. Restar dos numeros.");
        printf( "\n   3. Multiplicar dos numeros.");
        printf( "\n   4. Dividir dos numeros.");
        printf( "\n   5. Salir.\n" );

        do
        {
            printf( "\n   Introduzca opcion (1-5): ");
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '5' );

        switch ( opcion )
        {
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%f", &b);
                      sumaPuntero(&a,&b,&suma);
                      printf( "\n   %f + %f = %f\n", a, b, suma);
                      break;

            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%f", &b);
                      restaPuntero(&a,&b,&resta);
                      printf( "\n   %f - %f = %f\n", a, b, resta);
                      break;

            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%f", &b);
                      multiplicacionPuntero(&a,&b,&multiplicacion);
                      printf( "\n   %f * %f = %f\n", a, b,  multiplicacion);
                      break;

            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%f", &a);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%f", &b);
                      divisionPuntero(&a,&b,&division);
                      if ( b != 0 )
                          printf( "\n   %f dividido %f = %f \n", a, b, division);
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
        }

    } while ( opcion != '5' );
}