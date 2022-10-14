#include <stdio.h>

/**
 * main - prints all possible combinations of 2 digits
 * Return: 0 if successful
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
