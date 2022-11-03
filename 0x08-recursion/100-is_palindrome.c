#include "main.h"
/**
 * is_palindrome - checks if string is a palindrome
 * @s: pointer to strong to check
 * Return: 1 if palingdrome, 0 if not
 */
int is_palindrome(char *s)
{
	char *e;
	int len = 0;

	len = _strlen_recursion(s);
	e = s + len;
	if (len == 1 || len == 0)
		return (1);
	return (check_palindrome(s, e, len));
}
/**
 * check_palindrome - checks if string is a a palindrome
 * @start: start of string
 * @end: end of string
 * @length: string length
 * Return: 1 if pamindrome, 0 otherwise
 */
int check_palindrome(char *start, char *end, int length)
{
	if (start == end)
		return (1);
	if (*start != *end)
		return (0);
	if (length > 2)
		return (check_palindrome(start + 1, end - 1, length - 2));
	return (1);
}
