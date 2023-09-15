#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list ptr;

	va_start(ptr, n);

	for (z = 0; z < n; z++)
	{
		printf("%d\n", va_arg(ptr, unsigned int));
		if (z != (n - 1) && separator != NULL)
			printf("%s\n", separator);
	}
	va_end(ptr);
}
