#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
