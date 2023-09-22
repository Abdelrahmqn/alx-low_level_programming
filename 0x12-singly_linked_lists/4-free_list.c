#include "lists.h"

/**
 * free_list - function that frees a list_t
 * @head : the head
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->next);
		free(head->str);
		free(head);
	}

}
