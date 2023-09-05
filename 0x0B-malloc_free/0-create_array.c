#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: input1
 * @c: input2
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
