#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: takes in integer type input for function
 * Return: Always 0 (success)
 */

int _abs(int i)
{
	if (i < 0)
		i = (-1) * i;
	return (i);
}
