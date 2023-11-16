#include "lists.h"
/**
 * list_len - the number of elements in a linked list_t list.
 * @h: Pointer at the head of the linked list.
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t the_number_of_the_elements = 0;
	const list_t *elements = h;

	while (elements != NULL)
	{
		the_number_of_the_elements++;
		elements = elements->next;
	}
		return (the_number_of_the_elements);
}
