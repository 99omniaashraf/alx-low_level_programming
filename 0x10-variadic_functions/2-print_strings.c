#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int z;

	va_start(ap, n);

	for (z = 0; z < n; z++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (z != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
