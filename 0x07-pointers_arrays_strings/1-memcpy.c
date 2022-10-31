#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to destinaton address
 * @src: pointer to source address
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
