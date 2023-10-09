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
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
	if (b[a] != '0' && b[a] != '1')
		return (0);
	val = val * 2 + (b[a] - '0');
	}
	return (val);
}
