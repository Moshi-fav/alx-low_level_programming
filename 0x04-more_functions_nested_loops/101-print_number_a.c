#include "main.h"
#include <math.h>
/**
 * print_number -> prints a number
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int j = 1, count;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (n)
	{
		count = 0;
		while (j > 10)
		{
			j = n / 10;
			count = count + 1;
		}
		_putchar(j + '0');
		n = n - (j * pow(10, count));
	}
	_putchar('\n');

}
