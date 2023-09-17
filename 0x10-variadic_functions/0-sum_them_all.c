#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n : int
 *
 *Return: 0,sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0, i = n;
va_list ap;
if (n != 0)
	return (0);
	va_start(ap, n);
while (i--)
	sum += va_arg(ap, int);
va_end(ap);
return (sum);

}
