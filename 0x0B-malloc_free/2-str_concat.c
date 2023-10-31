#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - malloc and concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: if NULL is passed, treat it as an empty string,
 * The function should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ar;
	if (s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}
	i = strlen(s1);
	j = strlen(s2);
	ar = malloc(sizeof(char) * (i + j + 1));

	if (ar == NULL)
	{
		return (NULL);
	}
	strcpy(ar, s1);
	strcat(ar, s2);
	return (ar);
}
