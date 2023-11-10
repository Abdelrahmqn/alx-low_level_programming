#include "variadic_functions.h"
/**
 * sum_them_all - returns thesum of all its parameters.
 * @n: THE numbers of the parameters.
 * Return: (0) If n == 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;
	va_list ptr;

	if (n == 0)
	return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
	x = va_arg(ptr, int);
		sum += x;
	}
	va_end(ptr);
	return (sum);
}
