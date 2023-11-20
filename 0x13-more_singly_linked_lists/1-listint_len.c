#include "lists.h"
/**
 * listint_len - function that returns the number of elements.
 *
 * @h: node in the linked list.
 *
 * Return: the numbers of the elements.
 */
size_t listint_len(const listint_t *h)
{
	int numbers = 0;
	const listint_t *elements = h;

	while (elements)
	{
		elements = elements->next;
		numbers++;
	}
	return (numbers);
}
