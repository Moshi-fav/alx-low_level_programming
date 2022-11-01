#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of both diagonals of a square matrix
 * @a: pointer to matix
 * @size: number of rows and columns
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i][i];
		sum2 += a[i][size - i - 1];
	}
	printf("%d, %d\n", sum, sum2);
}
