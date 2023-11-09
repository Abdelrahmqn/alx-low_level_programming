#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array of characters.
* @size: the size.
* @cmp: function pointer.
* Return: the value.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array && cmp && (size != 0))
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]))
			return (c);
		}
	}
	return (-1);
}
