#include "main.h"
/**
 * _memset - replaces n bytes, starting from *s, with constant byte b
 * @s: char pointer
 * @b: byte
 * @n: number of bytes to replace
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
