#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a specific position.
 * @h: head
 * @idx: the position.
 * @n: data.
 * Return: the address of the new, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *dtemp = *h, *new, *ptr = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
	if (*h != NULL)
	{
		(*h)->prev = new;
	}
	*h = new;
	return (new);
	}
	while (dtemp != NULL && i < idx)
	{
		ptr = dtemp;
		dtemp = ptr->next;
		i++;
	}
	if (i == idx)
	{
	new->next = dtemp;
	new->prev = ptr;
	if (dtemp != NULL)
	{
		dtemp->prev = new;
	}
	ptr->next = new;
	return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
