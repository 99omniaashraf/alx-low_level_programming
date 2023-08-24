#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input number
*/

void print_to_98(int n)
{
	int num;

	if (n > 98)
	{
		for (num = 0; num > 98; num--)
		{
			printf("%d, ", num);
		}
	}
	else
	{
		for (num = 0; num < 98; num++)
		{
			printf("%d, ", num);
		}
	}
	printf("98\n");
}
