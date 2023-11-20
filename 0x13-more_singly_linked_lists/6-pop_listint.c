#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: the head of the list.
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *imp;
	int n = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		imp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(imp);
			imp = NULL;
	}
	return (n);
}
