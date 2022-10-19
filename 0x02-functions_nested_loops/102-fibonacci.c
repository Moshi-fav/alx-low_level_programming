#include <stdio.h>
/**
 * main - prints forst 50 fibonacci numbers
 * Return: 0 if successful
 */
int main(void)
{
	int i = 1, j = 2, k, count = 2;

	printf("%d, %d, ", i, j);
	for (; count <= 49; count++)
	{
		k = i + j;
		printf("%d, ", k);
		i = j;
		j = k;
	}
	k = i + j;
	printf("%d\n", k);
	return (0);
}
