#include "lists.h"
/**
 * sum_listint - function that returns the sum of the n of a list.
 *
 * @head: the head of the list.
 *
 * Return: if the list is empty, return (0).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
