#include "main.h"
/**
 * string_nconcat - Concatenates two strings with at most n bytes of s2.
 * @s1: The first string to be concatenated.
 * @s2: The second string from which a portion will be concatenated.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * This function concatenates the first string 's1'
 *'n' bytes ofthe second string 's2'
 * Return: A pointer to the newly allocated concatenated string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char  *ar;
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;

	ar = malloc((l1 + n + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	strcpy(ar, s1);
	strncat(ar, s2, n);

	return (ar);
}
