#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at of a listint_t linked list
 * @head: pointer to first node
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i;

	temp = *head;
	current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	i = 0;
	while (i < (index - 1))
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp;
	if (temp->next == NULL)
		return (-1);
	temp = temp->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
