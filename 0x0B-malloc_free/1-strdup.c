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
	int a;
	int num = 0;
	char *copy = malloc(sizeof(char) * num + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		num++;
	}
	if (copy == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		copy[a] = str[a];
	}
	return (copy);
}
