#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - checks whether a number is positive, negative or zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is 0\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else{
		printf("%d is negative\n", n);
	}

	return (0);
}
