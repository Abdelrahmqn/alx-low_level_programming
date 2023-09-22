#include "lists.h"

/**
 * print_list - prints all elemnts of a list_t list.
 *
 * @h: inputs pointer
 *
 * Return: counts
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
			printf("[%u] %s\n", uniq->len, uniq->str);

		uniq = uniq->next;
		count++;
	}

	return (count);
}
