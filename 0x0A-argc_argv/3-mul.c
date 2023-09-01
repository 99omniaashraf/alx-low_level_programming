#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: integer variable
 * @argv: array of character pointers listing all the arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
