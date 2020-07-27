#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t size;

	current = h;
	size = 0;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}
