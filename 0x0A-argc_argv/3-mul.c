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
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}

/**
* _atoi - converts char array to number
* 
* @str: pointer to char array
* 
* Return: converted int value
*/

int _atoi(char *str)
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
		i = 1;
	}
	for (; i < len; i++)
	{
		num = num * 10 + str[i] - '0';
	}
	if (neg == 1)
		num = -num;
	return (num);
}

