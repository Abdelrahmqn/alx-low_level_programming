#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int l;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	for (l = longi; l > 0; l--)
	{
		_putchar(*s--);
	}

	_putchar('\n');
}
