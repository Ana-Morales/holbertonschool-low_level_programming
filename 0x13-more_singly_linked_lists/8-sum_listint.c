#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
