#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: input
 * @...: the integer sum
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list result;

	if (n == 0)
	{
		return (0);
	}

	va_start(result, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(result, unsigned int);
	}
	va_end(result);
	return (sum);
}
