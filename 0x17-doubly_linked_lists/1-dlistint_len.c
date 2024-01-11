#include "lists.h"
/**
 * dlistint_len - returns the num of elements.
 * @h: the head of the dllist.
 *
 * Return: the number of the elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
