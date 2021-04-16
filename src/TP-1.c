/*
 ============================================================================
 Name        : TP-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"

#define INICIAL 0
#define OPE_A 1
#define OPE_B 2
#define SE_CALCULO 3





int main()
{
    char seguir = 's';
    int primerOperando = 0;
    int segundoOperando = 0;
    int rSuma;
    int rResta;
    float rDivision;
    int okDiv;
    int rMultiplicacion;
    long int rFactorialA;
    long int rFactorialB;
    int flagEstado;
    int flagA = 0;
    int flagB = 0;

    okDiv = division(primerOperando,segundoOperando, &rDivision);



    do
    {
        //system("cls");
        switch( menu(&primerOperando,&segundoOperando,flagA, flagB) )
        {
        case '1':
            printf("\n Ingresa 1er operando: ");
            scanf("%d",&primerOperando);
            flagA = 1;
            flagEstado = OPE_A;
            system("pause");
            break;
        case '2':
            if(flagEstado == OPE_A)
            {
                printf("\n Ingresa 2do operando: ");
                scanf("%d", &segundoOperando);
                flagB=1;
                flagEstado = OPE_B;
            }
            else
            {
                printf("Antes de poner definir el segundo operando, debes definir el primero!\n");
            }
            system("pause");
            break;
        case '3':
            if(flagEstado == OPE_A)
            {
                printf("Antes de calcular define el segundo operando\n");
            }
            else if(flagEstado == INICIAL)
            {
                printf("Antes de calcular debes definir los operadores\n");
            }
            else
            {
             rSuma=suma(primerOperando,segundoOperando);
            rResta=resta(primerOperando,segundoOperando);
            if(okDiv)
            {
                rDivision=division(primerOperando,segundoOperando, &rDivision);
            }
            rMultiplicacion=multiplicacion(primerOperando,segundoOperando);
            rFactorialA = factorialA(primerOperando);
            rFactorialB = factorialB(segundoOperando);
            flagEstado= SE_CALCULO;
            }
            printf("Se calculo correctamente!!!\n");
            system("pause");
            break;
        case '4':
            if(flagEstado == OPE_A)
            {
                printf("Antes de mostrar define el segundo operando\n");
            }
            else if(flagEstado == OPE_B)
            {
                printf("Antes de mostrar debe calcular\n");
            }
            else if(flagEstado == INICIAL)
            {
                printf("Antes de mostrar debe definir el primer operando\n");
            }
            else
            {
            printf("El resultado de %d + %d es: %d\n",primerOperando,segundoOperando,rSuma);
            printf("El resultado de %d - %d es: %d\n",primerOperando,segundoOperando,rResta);
            if(okDiv)
            {
                printf("El resultado de %d/%d es: %.2f\n",primerOperando,segundoOperando,rDivision);
            }
            else
            {
                printf("No se pudo realizar la operacion\n");
            }
            printf("El resultado de %d * %d es: %d\n",primerOperando,segundoOperando,rMultiplicacion);
            printf("El resultado de %d! es: %ld  y el de %d! es: %ld\n",primerOperando,rFactorialA,segundoOperando,rFactorialB);
            flagEstado= INICIAL;
            flagA = 0;
            flagB = 0;
            primerOperando = 0;
            segundoOperando = 0;
            }
            system("pause");
            system("cls");
            break;
        case '5':
            seguir= 'n';
            break;
        }
        system("cls");
    }
    while(seguir == 's');


    return 0;
}
