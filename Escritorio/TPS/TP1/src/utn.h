#ifndef UTN_H
#define UTN_H

int sumarEnteros (int operadoA, int operadoB, int *resultado);
int restarEnteros (int operadoA, int operadoB, int *resultado);
int dividirEnteros (int operadoA, int operadoB, float *resultado);
int multiplicarEnteros (int operadoA, int operadoB, int *resultado);
int calcularFactorial (int operadoA, int *resultado);

int getInt(int *pResultado,char *mensaje,char *mensajeError,int minimo, int maximo,int reintentos);
int getFloat(float *pResultado,char *mensaje,char *mensajeError,int minimo, int maximo,int reintentos);
int getChar(char *pResultado,char *mensaje,char *mensajeError,int minimo, int maximo,int reintentos);

#endif /*UTN_H*/
