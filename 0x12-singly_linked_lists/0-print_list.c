#include "lists.h"
/**
 * print_list - function that prints all the element of a list_t list.
 * @h: the number of the elements.
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	}
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	sum++;
	}
	return (sum);
}
