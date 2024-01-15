#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings
 * @dest: characters
 * @src: characters
 * Return: when need.
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
	dest[j] = src[i];
	j++;
	}
	dest[j] = '\0';
	return (dest);
}
