#include "lists.h"
/**
 * print_list - function that prints all the element of a list_t list.
 * @h: the number of the elements.
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int sum = 0;

	while (temp != NULL)
	{
	if (temp->str == NULL)
	{
	printf("[0] (nil)");
	}
	printf("[%u] %s\n", temp->len, temp->str);
	temp = temp->next;
	sum++;
	}
	return (sum);
}
