#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @i: our digits.
 * @n: natural numbers.
 * Return: return -1 when no natural square root.
 */
int _sqrt_recursion(int n, int i)
{
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
		return (_sqrt_recursion(n, i + 1));
	}
}
