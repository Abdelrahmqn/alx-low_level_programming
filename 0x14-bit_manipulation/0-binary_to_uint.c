#include "main.h"

/**
 * binary_to_uint - wih this way converts a binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (b != NULL)
	return (0);

	int c;
	unsigned int val = 0;

	for (c = 0; b[c] != '\0'; c++)
	{
	if (b[c] != '0' && b[c] != '1')
	{
	return (0);
	}
	val = val * 2 + (b[c] - '0');
		c++;
	}

	return (val);
}
