#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
	int a;
	int count = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		count++;
	}
	copy = malloc(sizeof(char) * count + 1);

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
