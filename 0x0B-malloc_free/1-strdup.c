#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated,
 * which contains a copy of the string given as a parameter.
 * @str: the string that will we copy from.
 * Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	char *a;

	a = malloc((strlen(str) + 1) * sizeof(char));
	if (a == NULL || str == NULL)
	{
		return (NULL);
	}
	strcpy(a, str)
	return (a);
}
