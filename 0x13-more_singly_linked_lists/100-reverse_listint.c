#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: pointer to first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	prev = *head;
	next = (*head)->next;
	prev->next = NULL;
	while (next != NULL)
	{
		*head = next;
		next = next->next;
		(*head)->next = prev;
		prev = *head;
	}
	return (*head);
}
