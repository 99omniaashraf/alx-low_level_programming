#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: integer variable
 * @argv: array of character pointers listing all the arguments
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int q, z, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	q = atoi(argv[1]);
	result = 0;

	if (q < 0)
	{
		printf("0\n");
		return (0);
	}
	for (z = 0; z < 5 && q >= 0; z++)
	{
		while (q >= coins[z])
		{
			result++;
			q -= coins[z];
		}
	}
	printf("%d\n", result);
	return (0);
}
