#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int a, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
