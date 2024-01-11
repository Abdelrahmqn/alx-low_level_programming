#include "lists.h"
/**
 * sum_dlistint - returns the sum of the all data of the d l l.
 * @head: the head of the d l l.
 *
 * Return: if the d l l is empty, return 0.
*/
int sum_dlistint(dlistint_t *head)
{
	int dsum = 0;

	while (head != NULL)
	{
		dsum += head->n;
		head = head->next;
	}

	return (dsum);
}
