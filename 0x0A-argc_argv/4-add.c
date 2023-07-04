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
int main(int argc, char* argv[])
{
	int sum = 0;
	int i, num;

	for (i = 1; i < argc; i++)
	{
		char* arg = argv[i];
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}