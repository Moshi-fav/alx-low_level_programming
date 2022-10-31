#include "main.h"
/**
 * _strstr - finds first occurence of a given substring in given string
 * @haystack: pointer to string to search
 * @needle: substring to search for
 * Return: pointer to substring in haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, length = 0;

	/*find length of substring needle*/
	for (i = 0; needle[i]; i++)
		length = length + 1;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (!needle[j + 1])
				return (haystack + i);
		}
	}
}
