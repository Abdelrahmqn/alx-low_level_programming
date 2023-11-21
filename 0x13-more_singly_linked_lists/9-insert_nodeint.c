#include "lists.h"
/**
 * insert_nodeint_at_index - function that returns the new node at idx.
 *
 * @head: the of the list.
 *
 * @n: to store the values.
 *
 * @idx: the index of the node.
 *
 * Return: if you can not finc the node ,(0).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *new_node;
	listint_t *imp = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (imp != NULL && i < idx)
	{
		temp = imp;
		imp = imp->next;
		i++;
	}
	if (i == idx)
	{
		temp->next = new_node;
		new_node->next = imp;
	return (new_node);
	}
	{
		free(new_node);
		return (NULL);
	}
}
