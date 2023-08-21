#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char num;

	for (a = 0; s[a] != '\0'; ++a)
		;
	for (b = 0; b < a / 2; b++)
	{
		num = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = num;
	}
}
