#include "main.h"
int actual_prime_number(int n, int a);

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * ,otherwise return 0
 * @n: input
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - find Prime number
 * @n: input1
 * @a: input2
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int actual_prime_number(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	return (actual_prime_number(n, a - 1));
}
