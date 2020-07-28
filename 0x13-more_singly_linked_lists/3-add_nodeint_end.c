#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: pointer to first node
 * @n: data for the new node
 *
 * Return: addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	last = *head;
	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (last);
}
