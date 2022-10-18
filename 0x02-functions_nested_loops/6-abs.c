#include "main.h"
/**
 * _abs -> return absolute value of agument
 * @c: integer parameter
 * Return: absolute value of argument
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
