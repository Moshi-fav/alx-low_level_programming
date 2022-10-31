#include "main.h"
/**
 * _strspn - gets the number of bytes of one string that is composed
 * entirely of bytes from another string
 * @s: prefix
 * @accept: other string?
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
