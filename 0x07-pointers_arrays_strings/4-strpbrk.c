#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any char from another string
 * @s: pointer to string to search
 * @accpet: pointer to bytes to search for
 * Return: pointer to byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if ((s[i] == accept[j]) && s[i])
				return s[i];
		}
	}
	return (0);
}
