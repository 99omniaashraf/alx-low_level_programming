#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		;
	}
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: input1
 * @av: input2
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, cmpt = 0;
	char *d;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++, b++)
	{
		b += _strlen(av[a]);
	}

	d = malloc(sizeof(char) * b + 1);
	if (d == 0)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (c = 0; av[a][c] != '\0'; c++, cmpt++)
		{
			d[cmpt] = av[a][c];
		}
		d[cmpt] = '\n';
		cmpt++;
	}
	d[cmpt] = '\0';
	return (d);
}
