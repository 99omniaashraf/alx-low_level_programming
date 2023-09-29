#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another
 * @n: input1
 * @m: input2
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int current = n ^ m;

	while (current)
	{
		if (current & 1UL)
			count++;
		current = current >> 1;
	}
	return (count);
}
