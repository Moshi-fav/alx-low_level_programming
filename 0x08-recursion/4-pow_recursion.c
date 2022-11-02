#include "main.h"
/**
 * _pow_recursion - raises a given number to a power of another given number
 * @x: base
 * @y: power
 * Return: x raised to power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
