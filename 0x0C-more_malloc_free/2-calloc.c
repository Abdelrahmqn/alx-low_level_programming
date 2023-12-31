#include "main.h"

/**
 * _calloc - Alocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size (in bytes) of each element.
 * Return: A pointer to the allocated memory or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * nmemb);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
		*((char *)ar + i) = 0;
	return (ar);
}
