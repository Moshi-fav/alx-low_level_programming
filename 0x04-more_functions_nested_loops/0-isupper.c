#include "main.h"
/**
 * _isupper -> checks if argument is uppercase
 * @c: integer parameter
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c <= "Z" && c >= "A")
		return (1);
	else
		return (0);
}
