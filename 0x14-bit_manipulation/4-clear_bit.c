#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at given index.
 * @n: number whose bit you want to check.
 * @index: index position of the bit in n.
 * Return: 1 when it worked, or -1 on error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		{
		return (-1);
		}
	*n &= ~(1UL << index);
	return (1);
}
