#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: integer variable
 * @argv: array of character pointers listing all the arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a = 0;
	char *z;

	while (--argc)
	{
		for (z = argv[argc]; *z; z++)
		{
			if (*z < 48 || *z > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[argc]);
	}
	printf("%d\n", a);
	return (0);
}
