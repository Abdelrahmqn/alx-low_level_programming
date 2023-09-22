#include "lists.h"
#include <stdio.h>
/**
 * print_list - we can print all elements using while.
 *
 * @h: the head.
 *
 * Return: elements
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", temp->len, temp->str);

		temp = temp->next;
		i++;
	}

	return (i);
}
