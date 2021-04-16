/*
 * TP1.h
 *
 *  Created on: 15 abr. 2021
 *      Author: Miguel
 */

#ifndef TP1_H_
#define TP1_H_

/** \brief muestra todos las opciones del menú
 *
 * \param a int* primer operador
 * \param b int* segundo operador
 * \param banderaA int bandera para que cambie el valor de x
 * \return int retorna la opcion elegida
 *
 */
int menu(int* a, int* b, int banderaA, int banderaB);
/** \brief realiza la suma de dos operadores
 *
 * \param a int  operador 1
 * \param b int  operador 2
 * \return int  retorna el valor de la suma
 *
 */
int suma(int a, int b);
/** \brief realiza la suma de dos operadores
 *
 * \param a int operador 1
 * \param b int operador 2
 * \return int  retorna el valor de la resta
 *
 */
int resta(int a, int b);
/** \brief realiza la division de dos enteros y escribe el resultado en una variable
 *
 * \param a int dividendo
 * \param b int divisor
 * \param c float* referencia donde se carga el resultado
 * \return int retorna 1 si se realizo la operacion o 0 si no
 *
 */
int division(int a, int b, float* c);
/** \brief realiza la multipiicacion de dos operadores
 *
 * \param a int  operador 1
 * \param b int  operador 2
 * \return int   retorna el resultado de la multiplicacion
 *
 */
int multiplicacion(int a, int b);
/** \brief realiza el factorial de un operando
 *
 * \param a int operando 1
 * \return long long int retorna 1 si no se pudo sacar el factorial o el factorial si se saco correctamente
 *
 */
long int factorialA( int a);
/** \brief realiza el factorial del segundo operando
 *
 * \param b int operando 2
 * \return long long int retorna 1 si no se realizo la operacion o el resultado si se hizo la operacion correctamente
 *
 */
long int factorialB( int b);


#endif /* TP1_H_ */
