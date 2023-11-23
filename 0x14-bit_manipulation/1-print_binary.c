#include "main.h"
#include <unistd.h>
/**
 * print_binary - function that prints binary.
 *
 * @n: unsigned long integer type.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int count;
	int flag = 0;
	int size;

	size = sizeof(unsigned long int) * 8;
	for (count = size - 1; count >= 0; count--)
	{
		temp = 1UL << count;
		if (n & temp)
		{
			write(1, "1", 1);
			flag = 1;
		}
		else if (flag)
		{
			write(1, "0", 1);
		}
	}
	if (!flag)
	{
		write(1, "0", 1);
	}
}
