#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 *@s: string
 * Return: the length of a string
*/

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}
