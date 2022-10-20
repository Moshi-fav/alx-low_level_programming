#include "main.h"
/**
 * print_triangle -> prints a triangle followed by newline
 * @size: integer parameter
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (i = size - 1; i >= 0; i--)
				_putchar(' ');
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
