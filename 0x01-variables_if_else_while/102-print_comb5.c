#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int z;

	for (n = 0; n <= 99; n++)
	{
		for (z = 0; z <= 99; z++)
		{
			if (n != z)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (n != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
