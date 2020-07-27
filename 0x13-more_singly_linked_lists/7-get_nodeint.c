#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: index of the node, starting at 0
 *
 * Return: address of the nth node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL && i < index)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
