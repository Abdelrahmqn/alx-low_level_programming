#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned integer input
 * Return: no thing
 */
void print_binary(unsigned long int n)
{
	int count = 0, i;
	unsigned int result;

	for (i = 63; i >= 0; i--)
	{
	result = n >> i;
		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		_putchar('0');
	}
	if (!count)
		_putchar('0');
}
