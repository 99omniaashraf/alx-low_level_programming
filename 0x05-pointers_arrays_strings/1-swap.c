#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
