#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated,
 * which contains a copy of the string given as a parameter.
 * @str: the string that will we copy from.
 * Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *a;

	a = malloc((size + 1) * sizeof(char));
	while (str[size] != '\0')

		size++;
	if (a == NULL || str == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
	a[i] = str[i];
	}
	a[i] = '\0'
	return (a);
}
