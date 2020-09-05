#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: points to the first node of the list
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t number = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		number++;
		current = current->next;
	}
	return (number);
}
