#include "main.h"
/**
 * binary_to_uint - function that converts binary to usigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted numbers, or 0 if.
 * there is one more chars in b.
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int i;
	int len;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	sum = (sum << 1) + (b[i] - '0');
	}
	return (sum);
}
