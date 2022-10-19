#include <stdio.h>
/**
 * main - prints sum of even fibonacci numbers under 4000000
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k, sum = 2;

	while (k < 4000000)
	{
		k = i + j;
		if (k % 2 == 0)
			sum = sum + k;
		i = j;
		j = k;
	}
	printf("%lu\n", sum);
	return (0);
}
