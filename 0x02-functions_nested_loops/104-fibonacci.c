#include <stdio.h>
/**
 * main - prints first 98 Fibonacci numbers
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int i = 1, j = 2, k, divj, remj, divi, remi, count;

	printf("%lu, %lu", i, j);
	for (count = 2; count <= 90; count++)
	{
		k = i + j;
		printf(", %lu", k);
		i = j;
		j = k;
	}

	divi = i / 1000000000;
	remi = i % 1000000000;
	divj = j / 1000000000;
	remj = j % 1000000000;
	for (count = 92; i < 99; i++)
	{
		printf(", %lu", divj + (remj / 1000000000));
		printf("%lu", remj % 1000000000);
		divj = divj + divi;
		divi = divj - div i;
		remj = remj + remi;
		remi = remj - remi;
	}
	printf("\n");
	return (0);

}
