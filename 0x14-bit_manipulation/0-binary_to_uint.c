#include "main.h"

/**
 * binary_to_uint - wih this way converts a binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (!b)
		return (0);

	while (*b)
	{
	if (*b != '0' && *b != '1')
		return (0);
	val = val * 2 + (*b++ - '0');
	}
	return (val);
}
