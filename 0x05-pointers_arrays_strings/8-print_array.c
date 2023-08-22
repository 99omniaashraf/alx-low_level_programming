#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @n: the number of elements of the array
 * @a: string
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z != (n - z))
			printf("%d, ", a[z]);
		else
		printf("%d", a[z]);
	}
	printf("\n");
}
