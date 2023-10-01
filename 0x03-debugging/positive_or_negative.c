#include "main.h"
/**
 * main - Determine if anumber is positive, negative or zero
 * @n: input
 * Return: Always 0 (success)
*/

void postitive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return;
}
