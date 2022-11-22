#include "main.h"
/**
 * _puts - prints a given string
 * @str: pointer to string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
