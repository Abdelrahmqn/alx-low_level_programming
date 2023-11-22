#include "lists.h"
/**
 * print_listint_safe - function that prints all (floyd-way).
 *
 * @head: the head of the nodes.
 *
 * Return: always (0) on success.
 */
size_t print_listint_safe(const listint_t *head)
{
	int counting;
	const listint_t *first = head;
	const listint_t *second = head;

	if (head == NULL)
		{
			exit(98);
		}
	for (counting = 0; first != NULL && second->next != NULL; counting++)
	{
		first = first->next->next;
		second = second->next;
		printf("[%x]\n", second->n);
		if (first == second)
		{
			printf("->[%u] %u\n", second->n, head->n);
			return (counting);
		}
	}
	return (counting);
}
