#include "lists.h"
/**
 * list_len - prints the number of elements in a list-t.
 *
 * @h: head
 *
 * Return: elemnts.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *uniq = h;

	while (uniq != NULL)
	{
		uniq = uniq->next;
		count++;
	}
	return (count);
}