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
	size_t count = 0;
	const list_t *uniq = h;

	while (uniq != NULL)
	{
		if (uniq->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", uniq->len, uniq->str);

		uniq = uniq->next;
		count++;
	}

	return (count);
}
