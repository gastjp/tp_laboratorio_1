#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "utn.h"


/*
 ============================================================================
 Name        : TP1.c
 Author      : Gaston Romaña
 Version     :
 Copyright   : All rights reserved
 Description : Calculadora que suma, resta, divide y multiplica dos operandos
 ingresados por el usuario y también calcula el factorial del primer operando.-
 ============================================================================
 */

int main(void) {

	int operandoA = 0;
	int operandoB = 0;
	int resultadoSuma;
	int resultadoResta;
	float resultadoDivision;
	int resultadoMultiplicacion;

	int* pOperandoA = &operandoA;
	int* pOperandoB = &operandoB;
	int* pResultadoSuma = &resultadoSuma;
	int* pResultadoResta = &resultadoResta;
	float* pResultadoDivision = &resultadoDivision;
	int* pResultadoMultiplicacion = &resultadoMultiplicacion;

	int retornoFuncionSuma;
	int retornoFuncionResta;
	int retornoFuncionDivision;
	int retornoFuncionMultiplicacion;

	char opcion;
	char opcionCalcular;

	do{
		printf ("1. Ingresar primer operando (A =x)\n"
				"2. Ingresar segundo operando (B=y)\n"
				"3. Calcular todas las operaciones\n"
				"4. Informar resultados\n"
				"5. Salir\n");
		__fpurge(stdin);
		scanf("%c",&opcion);

		switch (opcion)
		{
		case '1':

			if(getInt(pOperandoA,"\nIngrese el primer operando (A):","\nNo es un numero!!\n",3) == 0)
			{
				printf("\nEl numero ingresado es %d\n",operandoA);
			}
			break;
		case '2':
			if (getInt(pOperandoB,"\nIngrese el segundo operando (B):","\nNo es un numero!!\n",3) == 0)
			{
				printf("\nEl numero ingresado es %d\n",operandoB);
			}
			break;
		case '3':
			do
			{
				printf ("a. Calcular la suma (A+B)\n"
						"b. Calcular la resta (A-B)\n"
						"c. Calcular la división (A/B)\n"
						"d. Calcular la multiplicación (A*B)\n"
						"e. Calcular el factorial\n"
						"f. Atras\n");
				__fpurge(stdin);
				scanf("%c",&opcionCalcular);

				switch (opcionCalcular)
				{
				case 'a':
					retornoFuncionSuma = sumarEnteros(operandoA,operandoB,pResultadoSuma);
					if(retornoFuncionSuma== 0)
					{
						printf("\nSuma calculada.\n");
					}
					else
					{
						printf("\nError al calcular la suma.\n");
					}

					break;
				case 'b':
					retornoFuncionResta = restarEnteros(operandoA,operandoB,pResultadoResta);
					if(retornoFuncionResta==0)
					{
						printf("\nResta calculada.\n");
					}
					else
					{
						printf("\nError al calcular la resta.\n");
					}
					break;
				case 'c':
					retornoFuncionDivision = dividirEnteros(operandoA,operandoB,pResultadoDivision);
					if(retornoFuncionDivision==0)
					{
						printf("\nDivision calculada.\n");
					}
					else
					{
						printf("\nNo es posible dividir por 0.\n");
					}
					break;
				case 'd':
					retornoFuncionMultiplicacion = multiplicarEnteros(operandoA,operandoB,pResultadoMultiplicacion);
					if(retornoFuncionMultiplicacion==0)
					{
						printf("\nMultiplicacion calculada.\n");
					}
					else
					{
						printf("\nError al calcular la multiplicacion\n");
					}
					break;
				case 'e':
					break;
				}
			}while(opcionCalcular != 'f');
			break;
		case '4':
			if(retornoFuncionSuma == 0)
			{
				printf("\nEl resultado de (A)%d+%d(B) es:%d",operandoA,operandoB,resultadoSuma);
			}
			else
			{
				printf("\nNo se calculó la suma.");
			}

			if(retornoFuncionResta == 0)
			{
				printf("\nEl resultado de (A)%d-%d(B) es:%d",operandoA,operandoB,resultadoResta);
			}
			else
			{
				printf("\nNo se calculó la resta.");
			}
			if(retornoFuncionDivision == 0)
			{
				printf("\nEl resultado de (A)%d/%d(B) es:%.2f",operandoA,operandoB,resultadoDivision);
			}
			else
			{
				printf("\nNo se calculó la división.");
			}
			if(retornoFuncionMultiplicacion == 0)
			{
				printf("\nEl resultado de (A)%d*%d(B) es:%d\n",operandoA,operandoB,resultadoMultiplicacion);
			}
			else
			{
				printf("\nNo se calculó la multiplicacion.\n");
			}

			break;
		}

	}while (opcion != '5');


printf("\nSalida\n");




	return EXIT_SUCCESS;
}
