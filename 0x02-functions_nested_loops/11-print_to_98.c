#include "main.h"

/**
 * print_to_98 -> prints all digits from a give number to 98
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	int i, j;

	i = n / 10;
	j = n % 10;

	for (i = i; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i < 9 || (i == 9 && j <= 8)) &&
					(i > n / 10 || (i == n / 10 && j >= n % 10)))
			{
				if (i == 0)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(j + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(i + '0');
					_putchar(j + '0')
				}
				if (i != 9 || j != 8)
					_putchar(',');
			}
		}
	}
}
