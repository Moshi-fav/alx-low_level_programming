#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	char *a = s;
	int b;

	while (*s != '\0')
	{
		s++;
	}

	while (s != a)
	{
		_putchar(*(s));
		s--;
	}
	_putchar('\n');

}
