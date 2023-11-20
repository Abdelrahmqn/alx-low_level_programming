#include "lists.h"
/**
 * free_listint2 - function that frees listint_t.
 *
 * @head: the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *imp;

	while (*head)
	{
	imp = *head;
	*head = (*head)->next;
	free(imp);
	}
	*head = NULL;
}
