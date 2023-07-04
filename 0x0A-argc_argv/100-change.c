#include <stdio.h>
#include "main.h"

/**
* main - finds minimum number of coins required to make change
*
* @argc: number of arguments
* @argv: array of pointers to arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char* argv[])
{
	int coins = 0, rem;
	int denom[] = { 25, 10, 5, 2, 1 };

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	char* arg = argv[1];
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
	rem = atoi(arg);
	if (rem < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (rem > denom[i])
		{
			coins += rem / denom[i];
			rem = rem % denom[i]
		}
	}
	printf("%d\n", coins);
}