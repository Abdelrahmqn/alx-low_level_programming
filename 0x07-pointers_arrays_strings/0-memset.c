#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	char s[10];
	int n = 5;
	char b = 'A';

	memset(s, b, n);

	for (int i = 0; i < n; i++)
	
		return (s);
}
