#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: characters of integers.
 * @av: characters.
 */
char *argstostr(int ac, char **av)
{
	for (ac != '\0')
	{
	return (NULL);
	}
	int *ar, i, j;

	i = strlen(ac);
	j = strlen(av);
	ar = malloc(sizeof(int) * (i + j + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (; i < av; i++)
	{
	strcpy(ar ,ac);
	strcat(ar, av)
	}
	return (ar);
}
