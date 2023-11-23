#include "main.h"
/**
 * get_bit - function that returns the value of a bit at index.
 * @index: is the index, will start from 0!.
 * @n: number whose checks.
 * Return: the value of the bit at index index or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1 << index;
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
