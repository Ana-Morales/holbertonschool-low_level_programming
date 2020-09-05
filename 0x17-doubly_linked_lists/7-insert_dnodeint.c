#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to first node
 * @idx: index of the list where the new node should be added.
 * @n: data for the new node
 *
 * Return: address of the new node, NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while ((node != NULL) && (i < (idx - 1)))
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = node->next;
	new->prev = node;
	if (node->next != NULL)
		node->next->prev = new;
	node->next = new;
	return (new);
}
