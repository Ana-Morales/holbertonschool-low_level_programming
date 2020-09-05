#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a double linked list
 * @head: pointer to first node
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (node->next != NULL)
			node->next->prev = NULL;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);
	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
