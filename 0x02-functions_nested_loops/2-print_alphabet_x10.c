#include "main.h"
/**
 * print_alphabet_x10 -> prints the alphabet in lowercase 10 times
 */

void print_alphabet(void)
{
	int i;
	int letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		putchar('\n');
	}
}
