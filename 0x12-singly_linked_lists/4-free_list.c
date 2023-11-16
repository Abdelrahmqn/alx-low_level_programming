#include "lists.h"
/**
 * free_list - frees list_t
 * @head: the head of elements.
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
