#include "lists.h"
/**
 * listint_len - prints the number of elements in a listint-len.
 *
 * @h: head
 *
 * Return: elemnts.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
