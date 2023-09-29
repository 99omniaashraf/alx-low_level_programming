#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n : input
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;
		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');

}
