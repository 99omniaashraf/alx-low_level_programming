#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input1
 * @f: input2
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
