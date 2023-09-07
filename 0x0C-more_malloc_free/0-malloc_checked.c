#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - entry point
 *@b: an unsigned integer
 *Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{

	int *k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}
	return (k);



}
