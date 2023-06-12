#include <stdio.h>
#include "main.h"

/**
* main - prints number of arguments received
* @argc: number if arguments passed
* @argv: array of pointers to arguments
*
* Return: Always 0 (success)
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
}