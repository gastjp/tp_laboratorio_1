#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "utn.h"

int sumarEnteros (int operadoA, int operadoB, int *resultado)
{
	int retorno = -1;

	*resultado = operadoA + operadoB;
	retorno =0;

	return retorno;
}

int restarEnteros (int operadoA, int operadoB, int *resultado)
{
	int retorno = -1;

	*resultado = operadoA - operadoB;
	retorno =0;
	return retorno;
}

int dividirEnteros (int operadoA, int operadoB, float *resultado)
{
	int retorno =-1;
	if (operadoB != 0)
	{
	*resultado = (float) operadoA / operadoB;
	retorno = 0;
	}

	return retorno;
}

int multiplicarEnteros (int operadoA, int operadoB, int *resultado)
{
	int retorno =-1;

	*resultado = operadoA * operadoB;
	retorno = 0;

	return retorno;
}

int getInt(int *pResultado,char *mensaje,char *mensajeError,int reintentos)
{
	int retorno = -1;
	int resultadoScan;
	int bufferInt;


	while (reintentos >0)
	{
		printf(mensaje);
		__fpurge(stdin);
		resultadoScan=scanf("%d",&bufferInt);

		if (resultadoScan > 0)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
		else
		{
			printf(mensajeError);
			reintentos--;
			printf("Reintentos restantes:%d\n",reintentos);
		}
	}

	if (reintentos==0)
	{
		printf("\nno quedan reintentos!!\n");
	}

	return retorno;
}




int getFloat(float *pResultado,char *mensaje,char *mensajeError,int reintentos)
{
	int retorno = -1;
	int resultadoScan;
	float bufferFloat;


	while (reintentos >0)
	{
		printf(mensaje);
		__fpurge(stdin);
		resultadoScan=scanf("%f",&bufferFloat);

		if (resultadoScan > 0)
			{
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}
		else
		{
			printf(mensajeError);
			reintentos--;
			printf("Reintentos restantes:%d\n",reintentos);
		}
	}

	if (reintentos==0)
	{
		printf("\nno quedan reintentos!!\n");
	}

	return retorno;
}



/*
 * utn_getNumero : Pide al usuario un numero
 * pResultado: Direccion de memoria de la variable donde escribe el valor ingresado por el usuario
 * min: valor minimo valido (inclusive)
 * max: valor maximo valido (no inclusive)
 * msg: El mensaje que imprime para pedir un valor
 * msgError: mensaje que imprime si el rango no es valido
 * reintentos: cantidad de reintentos
 * Retorno: 0: si esta todo OK. -1: Si hubo un error
 */

int utn_getNumero(int* pResultado, int minimo, int maximo, char* mensaje, char* mensajeError, int reintentos)
{
	int retorno = -1;
	int numero;
	int retornoScanf;

	while(reintentos > 0)
	{
		printf("%s\n", mensaje);
		__fpurge(stdin); // linussss
		//fflush(stdin); // windorrrr

		retornoScanf = scanf("%d", &numero);

		if(retornoScanf==1 && numero>=minimo && numero<=maximo)
		{
			//escribir "numero" en la dire que tiene pResultado
			*pResultado = numero;
			retorno = 0;
			break;
		}
		else
		{
			printf("%s\n", mensajeError);
			reintentos--;
		}
	}
	if(reintentos == 0)
	{
		printf("Se quedo sin intentos");
	}
	return retorno;
}

