#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input
 * Return: pointer a new memory
 */

char *_strdup(char *str)
{
	int a = 0;
	int size = 0;
	char *q = malloc(size * sizeof(*str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}
	if (q == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
			q[a] = str[a];
	}
	return (q);
}
