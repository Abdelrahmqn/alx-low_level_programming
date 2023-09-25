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
	const int list_t *uniq = h;

	while (uniq != NULL)
	{
		if (uniq->n == NULL)
			printf("[0] (nil)\n");

		else
			printf("%d\n", uniq->n);

		uniq = uniq->next;
		count++;
	}

	return (count);
}

}