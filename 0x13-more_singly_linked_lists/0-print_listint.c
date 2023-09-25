#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t
 *
 * @h :head.
 *
 * Return: elements
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
