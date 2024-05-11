#include "search_algos.h"
#include <math.h>
/**
 * min - the minumum value in array
 *
 * @x: x
 * @y: y
 * Return: the value of func
*/
int min(int x, int y)
{
	if (y > x)
	{
		return (x);
	}
	else
	{
	return (y);
	}
}

/**
* jump_search - searches the value using SQRT
*
* @array: the array. (L)
* @size: the size of the array.(n)
* @value: the value that we're looking for.(s is search key (value...))
*
* Return: if value not in arr, arr is nULL you can, try(-1)
*/
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;

	size_t b = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (array[min(b, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", a, min(b, size) - 1);
		a = b;
		b = b + sqrt(size);
		if (a >= size)
		{
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	while (array[a] < value)
	{
		a++;
		if (a == fmin(b, size))
		{
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);

	}
	if (array[a] == value)
	{
		printf("Value found between indexes [%lu] and [%d]\n", a, array[a]);
		return (a);
	}
	return (-1);
}
