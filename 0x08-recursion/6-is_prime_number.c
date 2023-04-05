#include "main.h"

/**
 * check - checks to see if number is prime
 * @n:int
 * @b:int
 * Return:int
 */
int check(int n, int b)
{
	if (b < 2 || b % n == 0)
		return (0);
	else if (n > b / 2)
		return (1);
	else
		return (check(n + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @c:int
 * Return:int
 */
int is_prime_number(int c)
{
	if (c == 2)
		return (1);
	return (check(2, c));
}
