#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of the parameters.
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
