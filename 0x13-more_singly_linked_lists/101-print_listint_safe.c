#include "lists.h"
/**
 * find_loop - Finds if there is a loop in a linked list
 * @head: pointer to the first node
 *
 * Return: Pointer to the beginning of the loop
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *tortoise, *hare, *aux;

	tortoise = head;
	hare = head;
	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			aux = hare;
			while (hare != tortoise)
			{
				hare = hare->next;
				if (hare == tortoise)
					return (hare);
				if (hare == aux)
					tortoise = tortoise->next;
			}
		}
	}
	return (NULL);
}
/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: pointer to first node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *check_loop;
	size_t size;
	int count;

	current = head;
	size = 0;
	count = 0;
	check_loop = find_loop(head);
	if (check_loop == NULL)
	{
		while (current)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			size++;
			current = current->next;
		}
		return (size);
	}
	else
	{
		while (count < 2)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			size++;
			if (current->next == check_loop)
				count++;
			current = current->next;
		}
		printf("-> [%p] %d\n", (void *)current, current->n);
		return (size);
	}

}
