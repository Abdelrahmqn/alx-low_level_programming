#include "lists"

/**
 * free_list - function that frees a list_t
 * @head : the head
 */
void free_list(list_t *head)
{
	list_t count = 0;
	list_t *uniq = head;

	while (uniq == NULL)
	{
		free(uniq = uniq->next);
		count++
	}

}
