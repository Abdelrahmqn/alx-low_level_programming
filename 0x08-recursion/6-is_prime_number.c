#include "main.h"
/**
 * is_prime_recursive - function that a prime number.
 * @n: integer
 * @i: integer
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
	return (0);
	}

	if (i == 1)
	{
	return (1);
	}
	if (n % i == 0)
	{
	return (0);
	}

	return (is_prime_recursive(n, i - 1));
}
/**
 * is_prime_number- the call of the recursive should be prime
 * @n: integers
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
