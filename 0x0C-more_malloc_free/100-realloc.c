#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: input1
 * @old_size: input2
 * @new_size: input3
 * Return: pointer to the newly memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	ptr2 = ptr1;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr1[a] = ptr2[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr1[a] = ptr2[a];
	}
	free(ptr);
	return (ptr1);
}
