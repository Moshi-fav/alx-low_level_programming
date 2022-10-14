#include <stdio.h>

/**
 * main - prints all possible combinateions of single digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 8; digit++)
	{
		putchar(digit + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');
	return (0);
}
