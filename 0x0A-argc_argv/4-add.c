#include <stdio.h>
#include "main.h"

/**
* main - multiplies 2 numbers and prints the result
*
* @argc: number of arguments
* @argv: array of pointers to arguments
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int total = 0, invalid = 0, *inv = &invalid, i, c;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			c = _atoi2(argv[i], inv);
			if (invalid != 0)
			{
				printf("Error\n");
				return (1);
			}
			total = total + c;
			printf("invalid: %d\n", invalid);
		}
		printf("%d\n", total);
	}
	return (0);
}

/**
* _atoi2 - converts char array to number
*
* @str: pointer to char array
* @invalid: indicates whether value contains any non-digit chars
*
* Return: converted int value
*/

int _atoi2(char *str, int *invalid)
{
	int len = 0, num = 0, i = 0, neg = 0;

	while (str[len] != '\0')
		len++;
	if (str[0] == '-')
	{
		neg = 1;
	}
	else
	{
		num = str[0] - '0';
	}
	for (i = 1; i < len; i++)
	{
		printf("str[i]: %d", str[i]);
		if (str[i] < 48 || str[i] > 57)
		{
			(*invalid)++;
			return (0);
		}
		else
		{
			num = num * 10 + (str[i] - '0');
		}
	}
	if (neg == 1)
		num = -num;
	return (num);
}
