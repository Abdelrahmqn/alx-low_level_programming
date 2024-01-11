#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of d llist.
 * @head: the head of the d linked list
 * @index: the index of the list
 *
 * Return: if the no node (null).
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_var;
	unsigned int i = 0;

	temp_var = head;
	while (temp_var != NULL)
	{
		if (i == index)
	{
		return (temp_var);
	}
	i++;
	temp_var = temp_var->next;
	}
	return (NULL);
}
