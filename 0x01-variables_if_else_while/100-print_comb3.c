#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i1 = 0, i2;

	while (i1 <= 9)
	{
		i2 = 0;
		while (i2 <= 9)
		{
			if (i1 != i2 && i1 < i2)
			{
				putchar(i1 + 48);
				putchar(i2 + 48);

				if (i1 + i2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i2++;
		}
		i1++;
	}
	putchar('\n');
	return (0);
}
