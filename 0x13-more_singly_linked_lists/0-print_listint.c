#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to be printed
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t size;

	current = h;
	size = 0;
	while (current)
	{
		printf("%d\n", current->n);
		size++;
		current = current->next;
	}
	return (size);
}
