#include "main.h"
/**
 * print_diagonal -> prints a diagonal line in terminal
 * @n: number of times to print char \
 */
void print_diagonal(int n)
{
	int i, j;

	if (n >= 1)
	{
		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
