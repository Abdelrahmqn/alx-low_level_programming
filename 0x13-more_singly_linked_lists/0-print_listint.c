#include "lists.h"
/**
 * print_listint - function that prints all elements.
 *
 * @h: the head of the nodes.
 *
 * Return: always (0) on success.
 */
size_t print_listint(const listint_t *h)
{
	int counting = 0;
	const listint_t *elements = h;

	while (elements)
	{
		printf("%d\n", elements->n);
		elements = elements->next;
		counting++;
	}
	return (counting);
}
