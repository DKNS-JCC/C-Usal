#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int main(void)
{
	int matriz[MAX][MAX];
	int filas, columnas;
	int f, c;
	int sumam, sumaint;

	do
	{

		printf("Introduzca n filas matriz: ");
		scanf("%d", &filas);

	} while (filas > MAX || filas < 3);

	do
	{

		printf("Introduzca n columnas matriz: ");
		scanf("%d", &columnas);

	} while (columnas > MAX || columnas < 3);

	for (f = 0; f < filas; f++)
		for (c = 0; c < columnas; c++)
		{
			printf("Elemento [%d,%d]: ", f + 1, c + 1);
			scanf("%d", &matriz[f][c]);
		}
	for (f = 0; f < filas; f++)
	{
		sumam += matriz[f][0];
	}

	for (f = 0; f < filas; f++)
	{
		c = columnas - 1;
		sumam += matriz[f][c];
	}

	for (c = 1; c < (columnas - 1); c++)
	{
		f = 0;
		sumam += matriz[f][c];
	}

	for (c = 1; c < (columnas - 1); c++)
	{
		f = filas - 1;
		sumam += matriz[f][c];
	}

	for (f = 1; f < (filas - 1); f++)
	{
		for (c = 1; c < (columnas - 1); c++)
			sumaint += matriz[f][c];
	}
	printf("\nLa matriz:\n");
	for (f = 0; f < filas; f++)
	{
		for (c = 0; c < columnas; c++)
		{
			printf("%5d", matriz[f][c]);
		}
		printf("\n");
	}

	printf("\nLa suma del marco es: %d\n", sumam);
	printf("La suma del interior es: %d\n\n", sumaint);

	if (sumam > sumaint)
		printf("La matriz es marco.\n\n");

	else
		printf("La matriz no es marco.\n\n");

	return 0;
}
