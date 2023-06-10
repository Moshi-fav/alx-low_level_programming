#include <stdio.h>
#include "main.h"
/**
* main - prints program name
* @argc: number of arguments
* @argv: array of pointers to arguments
*
* Return: always 0 (success)
*/
int main(__attribute__((unused)), char* argv[])
{
	printf("%s/n", argv[0]);

	return(0);
}
