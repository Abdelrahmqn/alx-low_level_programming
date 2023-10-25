#include "main.h"
/**
 * _sqrt_helper - returns the natural square root of a number.
 * @i: our digits.
 * @n: natural numbers.
 * Return: return -1 when no natural square root.
 */
int _sqrt_helper(int n, int i)
{
	int i;

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
/**
 * _sqrt_recursion - returns helper
 * @i: our digits.
 * @n: natural numbers.
 * Return: the value of helper function
 */
	int _sqrt_recursion(int n, int i)
	{
	return (sqrt_helper(n, 0));
	}
