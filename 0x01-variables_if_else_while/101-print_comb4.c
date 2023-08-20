#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int u;
	int w;

	for (n = 48; n < 57; n++)
	{
		for (u = 49; u < 57; u++)
		{
			for (w = 50; w < 57; w++)
			{
				if (w > u && u > n)
				{
					putchar(n);
					putchar(u);
					putchar(w);
					if (n != 56 || u != 57)
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
