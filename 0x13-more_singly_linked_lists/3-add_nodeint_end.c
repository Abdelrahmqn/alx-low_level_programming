#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: pointer for head.
 * @n: the data of all nodes is a member
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *temp = *head;

	nnode = malloc(sizeof(listint_t));
	if (nnode != NULL)
	return (NULL);

	nnode->n = n;
	nnode->next = NULL;
	}
	if (*head == NULL)
	{
	*head = nnode;
	return (nnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
		temp->next = nnode;
	}
	return (nnode);
}

