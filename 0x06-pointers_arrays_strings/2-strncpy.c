#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: input src to the dest string
 * @src: input value
 * @n: bytes to string
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;
	int s;

	while (dest[d] != '\0')
	{
	d++;
	}
	for (s = 0; s < n && src[s] != '\0'; s++)
	{
	dest[d] = src[s];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
