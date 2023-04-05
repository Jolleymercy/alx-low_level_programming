#include "main.h"

/**
 * check - checks for the square root
 * @a:int
 * @j:int
 *
 * Return: int
 */
int check(int a, int j)
{
	if (a * a == j)
		return (a);
	if (a * a > j)
		return (-1);
	return (check(a + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of a number
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

