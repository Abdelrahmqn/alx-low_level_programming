#include "main.h"
/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: the string where copy from
 * Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *str1;

	str1 = malloc(strlen(str) + 1);
	if (str1 == NULL)
	{
	return (NULL);
	}
	srcpy(str1, str);
	return (str1);
}
