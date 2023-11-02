#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate for the memory.
 * This function allocates a block of memory of size 'b' bytes using malloc.
 * Return: A pointer to the allcated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
	exit(98);
	}
	return (ar);
}
