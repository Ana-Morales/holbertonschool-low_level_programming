#include "lists.h"
/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to the first node
 *
 * Return: address of the node where the loop starts, NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;
	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			while (hare != head)
			{
				hare = hare->next;
				if (hare == head)
					return (hare);
				if (hare == tortoise)
					head = head->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
