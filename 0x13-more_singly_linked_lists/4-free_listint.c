#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to first node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
