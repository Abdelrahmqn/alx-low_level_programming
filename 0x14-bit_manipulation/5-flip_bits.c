#include "main.h"
/**
 * flip_bits - returns number of bits to flip to get from one number to anothe
 * @n: number 1.
 * @m: number 2.
 * Return: -1 on fail, sum of bits to flip on success.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int result;
	unsigned int sum = 0;

	result = (m ^ n);
	while (result != 0)
	{
	sum += result & 1;
	result >>= 1;
	}
	return (sum);
}
