#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input1
 * @src: input2
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int a, n;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[a] = src[n];
		a++;
		n++;
	}
	dest[a] = '\0';
	return (dest);
}
