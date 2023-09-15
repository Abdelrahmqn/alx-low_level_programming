#include "function_pointers.h"
/**
 *array_iterator - Write a function that executes a function.
 *@action: func
 *@array: array of ints
 *@size: just suze of pointer
 *return : nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *ptr = array + size - 1;
if (array && size && action)
	while (array <= ptr)
		action(*array++);
}
