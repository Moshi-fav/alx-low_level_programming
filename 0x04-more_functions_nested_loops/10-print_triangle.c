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
			for (int i = size - 1; i >= 0; i++)
				_putchar(' ');
			for (int i = 1; i <= size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
