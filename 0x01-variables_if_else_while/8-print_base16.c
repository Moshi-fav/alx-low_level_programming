#include <stdio.h>

/**
 * main - prints base 16 numbers
 * Return: 0 if successful
 */
int main(void)
{
	char letter;
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
