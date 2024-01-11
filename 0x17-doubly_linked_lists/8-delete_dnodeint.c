#include "lists.h"
/**
 * delete_dnodeint_at_index - deleting a node at specific position
 * @head: the head of the list
 * @index: the index or the position that node where deleted
 *
 * Return: 1 succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dtemp = *head, *ptr;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(dtemp);
		return (-1);
	}
	while (dtemp != NULL && i < index - 1)
	{
		dtemp = dtemp->next;
		i++;
	}
	if (dtemp == NULL || dtemp->next == NULL)
	{
		return (-1);
	}
	ptr = dtemp->next;
	dtemp->next = ptr->next;
	free(ptr);
	return (1);
}
