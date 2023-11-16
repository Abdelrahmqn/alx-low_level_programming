#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the node.
 * @str: string of elements.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node1;
	list_t *l_head;

	new_node1 = malloc(sizeof(list_t));
	if (new_node1 == NULL)
	{
		return (NULL);
	}
	new_node1->str = strdup(str);
	if (new_node1->str == NULL)
	{
		free(new_node1);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new_node1;
	}
	new_node1->len = strlen(str);
	while (l_head->next != NULL)
	{
		l_head = l_head->next;
	}
	l_head->next = new_node1;
	new_node1->next = NULL;
	return (new_node1);
}
