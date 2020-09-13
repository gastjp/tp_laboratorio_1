#include <stdio.h>
#include <stdio_ext.h>
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

int calcularFactorial (int operadoA, int *resultado)
{
	int retorno =-1;
	int i;
	int f=1;

	if(operadoA >=0 && resultado != NULL)
	{
		for(i=1;i<=operadoA;i++)
		{
			f = f *i;
		}
	*resultado = f;
	retorno = 0;
	}

	return retorno;
}

int getInt(int *pResultado,char *mensaje,char *mensajeError,int minimo, int maximo,int reintentos)
{
	int retorno = -1;
	int resultadoScan;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		printf(mensaje);
		__fpurge(stdin);
		resultadoScan=scanf("%d",&bufferInt);

		if (resultadoScan > 0)
			{
				*pResultado = bufferInt;
				retorno = 0;
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




int getFloat(float *pResultado,char *mensaje,char *mensajeError,int minimo, int maximo,int reintentos)
{
	int retorno = -1;
	int resultadoScan;
	float bufferFloat;


	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		printf(mensaje);
		__fpurge(stdin);
		resultadoScan=scanf("%f",&bufferFloat);

		if (resultadoScan > 0)
			{
				*pResultado = bufferFloat;
				retorno = 0;
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


int getChar(char *pResultado,char *mensaje,char *mensajeError,int minimo, int maximo,int reintentos)
{
	int retorno = -1;
	int resultadoScan;
	char bufferChar;


	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		printf(mensaje);
		__fpurge(stdin);
		resultadoScan=scanf("%c",&bufferChar);

		if (resultadoScan > 0)
			{
				*pResultado = bufferChar;
				retorno = 0;
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


