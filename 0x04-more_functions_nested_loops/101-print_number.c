#include "main.h"
#include <math.h>
/**
 * print_number -> prints a number
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int num, j, count;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;
	while (num)
	{
		count = 0;
		j = num / 10;
		while (j > 10)
		{
			j = num / 10;
			count = count + 1;
		}
		_putchar(j + '0');
		num = num - (j * pow(10, count));
	}
	_putchar('\n');

}
