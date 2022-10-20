#include "main.h"
/**
 * more_numbers -> prints 10 times the numbers followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for(i = 0; i <= 14; i++)
	{
		j = i / 10;
		if (j > 0)
			_putchar(j + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
