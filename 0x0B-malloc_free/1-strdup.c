#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated,
 * which contains a copy of the string given as a parameter.
 * @str: the string that will we copy from.
 * Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	if (str == NULL)
                str = "";
char *ar;
int size = strlen(str);

	ar = malloc(sizeof(char) * (size + 1));
	if (ar == NULL)
	{
	return (NULL);
	}
	strcpy(ar, str);
	return (ar);
}
