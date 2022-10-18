#include "main.h"
/**
 * print_times_table -> prints times table from  0 to given number
 * @n: number to print times table to
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					if (k < 10)
						_putchar(' ');
					if (k < 100)
						_putchar(' ');
					_putchar(' ');
				}
				if (k > 99)
				{
					_putchar((k / 100) + '0');
					k = k - (k / 100) * 100;
					_putchar((k / 10) + '0');
					k = k - (k / 10) * 10;
					_putchar(k + '0');
				}
				else if (k > 9)
				{
					_putchar((k / 10) + '0');
					k = k - (k / 10) * 10;
					_putchar(k + '0');
				}
				else
				{
					_putchar(k = '0');
				}
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
