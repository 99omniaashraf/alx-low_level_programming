#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input1
 * @src: input2
 * @n: input3
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, z;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[a] = src[z];
		a++;
		z++;
	}
	dest[a] = '\0';
	return (dest);
}
