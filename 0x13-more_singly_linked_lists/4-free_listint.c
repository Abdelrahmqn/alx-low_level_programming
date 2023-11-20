#include "lists.h"
/**
 * free_listint - function that frees the list.
 * @head: the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
