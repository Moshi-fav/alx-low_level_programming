#include <stdio.h>

/**
 * main - prints all single digit base 10 numbers
 * Return: 0 if successful
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	putchar('\n');
	return (0);
}
