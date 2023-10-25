#include "main.h"
/**
 * factorial - returns the factoreial of a given number
 * @n: digits.
 * Return: If n is lower than 0,  the function should return -1
 * on error,Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
