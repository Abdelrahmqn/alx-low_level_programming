#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: input integer
 * Return: the elements
 */
void reverse_array(int *a, int n)
{
int var, start = 0, length = n - 1;

	while (start < length)
	{
	var = a[start];
	a[start] = a[length];
	a[length] = var;

		start++;
		length--;
	}
}
