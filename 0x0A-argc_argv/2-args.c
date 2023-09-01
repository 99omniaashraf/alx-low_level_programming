#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: integer variable
 * @argv: array of character pointers listing all the arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
