#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list
 * @head: double pointer to the list_t list
 * @n: to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	unsigned int len = 0;

	while (n[len])
		len++;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->len = len;
	new->n = (*head);
	(*head) = new;
	return (*head);
}