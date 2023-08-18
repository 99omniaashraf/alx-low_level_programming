#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
