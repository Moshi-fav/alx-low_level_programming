#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds first occurence of a given substring in given string
 * @haystack: pointer to string to search
 * @needle: substring to search for
 * Return: pointer to substring in haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
			if (*(needle + j + 1) == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
