#include "main.h"
/**
 * factorial - calculates the factorial of a given number
 * @n: number whose factorial is to be calculated
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
