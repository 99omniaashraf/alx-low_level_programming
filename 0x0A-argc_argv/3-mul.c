#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts
 * @s: input
 * Return:
 */

int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;

	while (a < d && e == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= 48 && s[a] <= 57)
		{
			f = s[a] - 48;
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: integer variable
 * @argv:array of character pointers listing all the arguments
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int z, q, result;

	if (argc == 3)
	{
		z = _atoi(argv[1]);
		q = _atoi(argv[2]);
		result = z * q;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
