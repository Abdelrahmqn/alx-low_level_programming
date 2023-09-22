#include "lists"

/**
 * free_list - function that frees a list_t
 * @head : the head
 */
void free_list(list_t *head)
{
	while (head == NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}

}
