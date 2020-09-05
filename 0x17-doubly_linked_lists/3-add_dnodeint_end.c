#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to first node
 * @n: number to be copied to new_node->n
 *
 * Return: addres of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	end = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	new->next = NULL;
	new->prev = end;
	end->next = new;
	return (new);
}
