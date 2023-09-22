#include "lists.h"

/**
 * print_list - we can print all elements using while.
 *
 * @h: the head.
 *
 * Return: elements
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		count++;
	}

	return (count);
}
