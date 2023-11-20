#include "lists.h"
/**
 * add_nodeint - function that adds node at the beginning.
 *
 *@n: to be stored in the new node.
 *
 * @head: the first node.
 *
 * Return: the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
