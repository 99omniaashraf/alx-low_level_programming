#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * multiples of 3 print Fizz instead of the number
 * multiples of 5 print Buzz
 * numbers which are multiples of both 3 and 5 print FizzBuzz
 * Each number or word should be separated by a space
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
