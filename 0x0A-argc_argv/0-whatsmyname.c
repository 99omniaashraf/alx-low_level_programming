#include "main.h"
#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: integer variable
 * @argv: array of character pointers listing all the arguments
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
