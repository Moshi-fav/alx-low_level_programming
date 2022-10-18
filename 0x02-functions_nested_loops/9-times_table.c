#include "main.h"
/**
 * times_table -> prints the times table from 0 to 9
 */
void times_table(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0)
			{
				_putchar(' ');
				if (j * i < 10)
					_putchar(' ');
			}
			if ( i * j < 10)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar((i * j / 10) + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
