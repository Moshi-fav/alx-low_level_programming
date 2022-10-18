#include <stdio.h>
/**
 * main - prints sum of multiples of 3 or 5 below 1024
 * Return: 0 if successful
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
