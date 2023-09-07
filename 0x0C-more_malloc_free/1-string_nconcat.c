#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input1
 * @s2: input2
 * @n: input3
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a = 0, q = 0,  z = 0, str = 0;

	while (s1 && s1[z])
		z++;
	while (s2 && s2[str])
		str++;

	if (n < str)
		c = malloc(sizeof(char) * (z + n + 1));
	else
		c = malloc(sizeof(char) * (z + str + 1));

	if (!c)
		return (NULL);

	while (a < z)
	{
		c[a] = s1[a];
		a++;
	}
	while (n < str && a < (z + n))
	{
		c[a++] = s2[q++];
	}
	while (n >= str && a < (z + str))
	{
		c[a++] = s2[q++];
	}
	c[a] = '\0';
	return (c);

}
