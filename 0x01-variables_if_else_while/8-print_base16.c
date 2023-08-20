#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int d;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (d = 97; d <= 102; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
