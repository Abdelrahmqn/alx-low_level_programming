#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: is the number whose bit you want to check.
 * @index: position of the bit in n.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check_byte;/**can be 64_BIT also**/

	check_byte = sizeof(unsigned long int) * 8;
	if (index >= check_byte)
	{
		return (-1);
	}
	else
	*n = *n | (1UL << index);
		return (1);
}
