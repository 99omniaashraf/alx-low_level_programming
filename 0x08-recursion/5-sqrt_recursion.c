#include "main.h"
int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural
 * @n: input1
 * @a: input2
 * Return: the result square root
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (actual_sqrt_recursion(n, a + 1));
}
