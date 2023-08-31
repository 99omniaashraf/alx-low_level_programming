#include "main.h"

int check_pal(char *s, int a, int z);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - checks the characters
 * @s: input1
 * @a: input2
 * @z: input3
 * Return: 1 if a string is a palindrome and 0 if not
 */
int check_pal(char *s, int a, int z)
{
	if (*(s + a) != *(s + z - 1))
	{
		return (0);
	}
	if (a >= z)
	{
		return (1);
	}
	return (check_pal(s, a + 1, z - 1));
}

/**
 * _strlen_recursion - return the length of a string
 * @s: input
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
