/*
 * TP1.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Miguel
 */
#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"


int menu(int* a, int* b,int banderaA, int banderaB)
{
    char opcion;


    printf("\n    ****Bienvenido a la calculadora****   \n");
        printf("\n");
        printf("1) Ingresar 1er operando (A ");
        if(banderaA!=0)
        {
            printf(" = %d )\n",*a);
        }
        else
        {
            printf(" = x )\n");
        }
        printf("2) Ingresar 2do operando (B ");
        if(banderaB!=0)
        {
            printf(" = %d )\n",*b);
        }
        else
        {
            printf(" = y )\n");
        }
        printf("3) Calcular todas las operaciones\n");
        printf("   a) Calcular la suma (%d+%d)\n",*a,*b);
        printf("   b) Calcular la resta (%d-%d)\n",*a,*b);
        printf("   c) Calcular la division (%d/%d)\n",*a,*b);
        printf("   d) Calcular la multiplicacion (%d*%d)\n",*a,*b);
        printf("   e) Calcular el factorial (%d!) y factorial (%d!)\n",*a,*b);
        printf("4) Informar resultados\n");
        printf("5) Salir\n");
        printf("\n Ingrese opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);

        return opcion;
}



int suma(int a, int b)
{
    return a + b;
}
int resta(int a, int b)
{
    return a - b;
}
int division(int a, int b, float* c)
{
    int todoOK = 0;

    if(b !=0 && c != NULL)
    {
       *c =(float) a/b;
       todoOK = 1;
    }


    return todoOK;
}
int multiplicacion(int a, int b)
{
    return a*b;
}
long int factorialA( int a)
{
    long int fact = 1;

    for(int i= 1; i <= a; i++)
    {
        fact =fact * i;
    }

    return fact;
}
long int factorialB( int b)
{
    long int fact = 1;

    for(int i=1; i <= b; i++)
    {
        fact *= i;
    }

    return fact;
}
