#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input1
 * @s2: input2
 * Return: contents of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, I;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = I = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[I] != '\0')
	{
		I++;
	}
	conct = malloc(sizeof(char) * (i + I + 1));

	if (conct == NULL)
	{
		return (NULL);
	}
	i = I = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[I] != '\0')
	{
		conct[i] = s2[I];
		i++, I++;
	}
	conct[i] = '\0';
	return (conct);
}
