#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 -> prints from given nukmber to 98
 * @n: number to print from
 */
void print_to_98(int n)
{
	if (n != 98)
		printf("%d, ", n);
	if (n > 98)
	{
		for (n = n - 1; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (n = n + 1; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", 98);
}
