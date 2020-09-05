#include "lists.h"
/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to first node
 *
 * Return: the sum, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
