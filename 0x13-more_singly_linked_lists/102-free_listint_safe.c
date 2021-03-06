#include "lists.h"
/**
 * find_loop_2 - Finds if there is a loop in a linked list
 * @head: pointer to the first node
 *
 * Return: Pointer to the beginning of the loop
 */
listint_t *find_loop_2(listint_t *head)
{
	listint_t *tortoise, *hare, *aux;

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
			return (hare);
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to first node
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *checkloop;
	size_t size;
	int count;

	size = 0;
	if (*h == NULL || h == NULL)
		return (size);
	checkloop = find_loop_2(*h);
	temp = *h;
	if (checkloop == NULL)
	{
		while (*h)
		{
			temp = (*h)->next;
			free(*h);
			size++;
			*h = temp;
		}
	}
	else
	{
		count = 0;
		if (temp == checkloop)
			count++;
		while (count < 2)
		{
			temp = (*h)->next;
			free(*h);
			size++;
			*h = temp;
			if (temp->next == checkloop)
				count++;
		}
		free(*h);
		size++;
	}
	*h = NULL;
	return (size);
}
