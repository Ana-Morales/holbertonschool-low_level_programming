#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list to be printed
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t size;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}
	return (size);
}
