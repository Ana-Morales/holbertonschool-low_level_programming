#include "lists.h"
/**
 * free_dlistint -  free a dlistint_t list.
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
