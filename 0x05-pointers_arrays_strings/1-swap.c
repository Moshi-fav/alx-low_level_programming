#include "main.h"
/**
 * swap_int - swaps values of 2 integers
 * @a: pointer to int to swap
 * @b: pointer to int to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
