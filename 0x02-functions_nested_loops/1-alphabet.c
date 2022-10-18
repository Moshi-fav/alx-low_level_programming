#include "main.h"
/**
 * main - prints the alpahbet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	int letter;
	for(letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
