#include"main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * wrdcnt - helper function
 * @s: string
 * Return: int
 */

int wrdcnt(char *s)
{
	int a;
	int k = 0;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				k++;
		}
		else if (a == 0)
			k++;
	}
	k++;
	return (0);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int a, b, c, d;
	int q = 0, z = 0;
	char **v;

	if (str == NULL || *str == '\0')
		return (NULL);
	q = wrdcnt(str);
	if (q == 1)
		return (NULL);
	v = (char **)malloc(q * sizeof(char *));
	if (v == NULL)
		return (NULL);
	v[q - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			v[z] = (char *)malloc(b * sizeof(char));
			b--;
			if (v[z] == NULL)
			{
				for (c = 0; c < z; c++)
					free(v[c]);
				free(v[q - 1]);
				free(v);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				v[z][d] = str[a + d];
			v[z][d] = '\0';
			z++;
			a += b;
		}
		else
			a++;
	}
	return (v);
}
