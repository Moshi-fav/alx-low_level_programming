#include <stdio.h>
#include "main.h"

/**
* main - prints each argument on a new line
*
* @argc: numbe rof arguments passed
* @argv: array of pointers to arguments
*
* Return: Always 0(success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}

	return (0);
}