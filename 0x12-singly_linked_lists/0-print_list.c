#include "lists.h"
/**
 * print_list - function that prints all the element of a list_t list.
 * @h: the number of the elements.
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	}
	printf("%s, %d\n", h->str, h->len);
	h = h->next;
	}
	return (0);
}
