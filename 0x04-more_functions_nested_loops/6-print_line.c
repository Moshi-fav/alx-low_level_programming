#include "main.h"
/**
 * print_line -> printa a line in the terminal
 * @n: number of times to print _
 */
void print_line(int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
