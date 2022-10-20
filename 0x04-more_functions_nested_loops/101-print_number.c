#include "main.h"
/**
 * print_number -> prints a number
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int num, j, mult;
	int count, i;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	while (num)
	{
		if (num < 9)
		{
			_putchar(num + '0');
			break;
		}
		else
		{
			j = 11;
			count = 0;
			while (j >= 10)
			{
				j = num / 10;
				count = count + 1;
			}
			_putchar(j + '0');
			mult = 1;
			for (i = 0; i < count; i++)
				mult = mult * 10;

			num = num - (j * mult);
		}
	}
	_putchar('\n');

}
