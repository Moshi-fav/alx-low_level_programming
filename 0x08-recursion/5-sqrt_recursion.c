#include "main.h"
/**
 * _sqrt - checks all numbers less than given number for its square root
 * @num: number to check for
 * @check: number to check from
 * Return: square root if found otherwise -1
 */
int _sqrt(int num, int check)
{
	if ((check * check) == num)
		return (check);
	if (check <= 0)
		return (-1);
	return (_sqrt(num, check - 1));
}
/**
 * _sqrt_recursion - finds natural square root of given number
 * @n: number for which to find a natural rooot
 * Return: integer square root or -1 if not integer square root exists
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_sqrt(n, n));
}
