#include "main.h"
int is_divisible(int x, int div);

/**
 * is_prime_number - Afunction that checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - check if num is divisible
 * @x: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int x, int div)
{
	if (x % div == 0)
		return (0);

	if (div == x / 2)
		return (1);

	return (is_divisible(x, div + 1));
}
