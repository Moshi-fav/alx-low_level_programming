#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns pointer to memory address of first occurrence of
 * character in string
 * @s: pointer to string to search in
 * @c: char to searcch for
 * Return: pointer to first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}
