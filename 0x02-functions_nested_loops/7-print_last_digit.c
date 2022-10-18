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
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
