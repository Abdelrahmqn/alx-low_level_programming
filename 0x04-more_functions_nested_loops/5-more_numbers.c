#include "main.h"
/**
 * more_numbers - from 0 to 14 print x10
 */
void more_numbers(void)
{
int f, i;

for (f = 0; f < 10; f++)
{
	for (i = 0; i < 15; i++)
	{
		if (i >= 10)
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
}
