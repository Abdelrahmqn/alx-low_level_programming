#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int i;


	str = malloc(size);

	if (size == 0 || str == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
