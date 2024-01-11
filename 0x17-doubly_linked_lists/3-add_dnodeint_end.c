#include "lists.h"
/**
 * add_dnodeint_end - function that adds node at the end in doubly linked list.
 * @head: the head of the list.
 * @n: the data or the num value (integer).
 *
 * Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *head_v2;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}
	head_v2 = *head;
	while (head_v2->next != NULL)
	{
		head_v2 = head_v2->next;
	}
	head_v2->next = end_node;
	end_node->prev = head_v2;
	return (end_node);
}
