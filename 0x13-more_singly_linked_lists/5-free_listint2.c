#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head->next;
		free(*head);
		*head = ptr;
	}
}

