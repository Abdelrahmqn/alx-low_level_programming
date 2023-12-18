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
	int i = 0;

	while (src[i] != '\0')
	{
		if (n > 0)
			dest[i] = src[i];
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

