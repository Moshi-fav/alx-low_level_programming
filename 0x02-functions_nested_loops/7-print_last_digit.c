#include "main.h"
/**
 * print_last_digit -> prints last digit of argument
 * @n: integer parameter
 * Return: last digit of argument
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int l = -n % 10;
		if (l < 0)
			l = -l;
		_putchar(l + '0');
		return (l);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
