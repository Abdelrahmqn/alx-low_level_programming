#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 *
 * @head: the of the list.
 *
 * @index: the index of the node.
 *
 * Return: if you can not finc the node ,(0).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *imp = head;
	unsigned int i = 0;

	while (imp != NULL)
	{
		if (i == index)
		{
		return (imp);
		}
		i++;
		imp = imp->next;
	}
	return (NULL);
}
