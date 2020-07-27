#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index of the list where the new node should be added.
 * @n: data for the new node
 *
 * Return: address of the new node, NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	i = 0;
	while (temp != NULL && i < (idx - 1))
	{
		if (temp->next == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
