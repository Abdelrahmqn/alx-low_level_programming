#include "main.h"
/**
 * set_bit - write a function that sets the value of a bit to 1 at index.
 * @n: pointer
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if(!n)
	{
	return (-1);
	}
	
	unsigned int result;
	int i;
	i = 1 << index;
	result = n | i;
	return (result);
}
