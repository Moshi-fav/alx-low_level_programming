#include <stdio.h>

/**
 * main - prints all possible combinateions of single digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
		if (digit < 9){
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
