#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index of list.
 * @head: the head of the list.
 * @index: the index of the list.
 * Return: 1 on success, -1 on failer.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	listint_t *n = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
			return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	n = temp->next;
	temp->next = n->next;
	free(n);
	return (1);
}
