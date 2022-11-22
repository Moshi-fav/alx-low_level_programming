#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	char *a = s;
	int len = _strlen(s);
	int b;

	for (b = len - 1; b > 0; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');

}
