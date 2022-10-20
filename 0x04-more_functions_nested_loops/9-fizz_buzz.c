#include <stdio.h>
/** main -> fizzbuzz test
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
			print("FizzBuzz ");
		else if (i % 3 == 0)
			print("Fizz ");
		else if (i % 5 == 0)
			print("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
}
