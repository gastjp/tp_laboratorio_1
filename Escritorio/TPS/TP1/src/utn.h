#ifndef UTN_H
#define UTN_H

int sumarEnteros (int operadoA, int operadoB, int *resultado);
int restarEnteros (int operadoA, int operadoB, int *resultado);
int dividirEnteros (int operadoA, int operadoB, float *resultado);
int multiplicarEnteros (int operadoA, int operadoB, int *resultado);

int getInt(int *pResultado,char *mensaje,char *mensajeError,int reintentos);
int getFloat(float *pResultado,char *mensaje,char *mensajeError,int reintentos);
int utn_getNumero(int* pResultado, int minimo, int maximo, char* mensaje, char* mensajeError, int reintentos);
#endif /*UTN_H*/
