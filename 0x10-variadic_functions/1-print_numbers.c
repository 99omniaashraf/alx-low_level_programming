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
	unsigned int a;
	va_list numbers;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(numbers, n);
	while (a--)
	{
		printf("%d%s", va_arg(numbers, unsigned int),
				a ? (separator ? separator : "") : "\n");
	}
	va_end(numbers);
}
