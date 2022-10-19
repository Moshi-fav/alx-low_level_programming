#include <stdio.h>
/**
 * main - prints forst 50 fibonacci numbers
 * Return: 0 if successful
 */
int main(void)
{
	long int i = 1, j = 2, k, count = 2;

	printf("%ld, %ld, ", i, j);
	for (; count <= 49; count++)
	{
		k = i + j;
		printf("%ld, ", k);
		i = j;
		j = k;
	}
	k = i + j;
	printf("%ld\n", k);
	return (0);
}
