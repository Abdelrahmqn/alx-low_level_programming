#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates 2 strings.
 *
 * @s1: inputs string.
 * @s2: inputs string.
 *
 * Return: pointer to concatenated string.
*/

char *str_concat(char *s1, char *s2)
{
char *str_concat(char *s1, char *s2)
{
	int total_length;

	if (s1 == NULL || s2 == NULL)
	{
	total_length = strlen(s1) + strlen(s2) + 1;
	}
	char *str3 = malloc(total_length * sizeof(char));
if (str3 != NULL)
{
strcpy(str3, s1);
strcat(str3, s2);
}
return (str3);
}
