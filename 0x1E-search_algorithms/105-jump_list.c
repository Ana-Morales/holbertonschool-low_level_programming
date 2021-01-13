#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return:  pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left, *right;
	int step, i;

	if (list == NULL)
		return (NULL);
	left = list;
	right = list;
	step = sqrt(size);
	for (i = 0; i < step && i < (int)size; i++)
		right = right->next;
	while (step < (int)size && right->n < value)
	{
		printf(
			"Value checked at index [%lu] = [%d]\n", right->index,
			right->n);
		left = right;
		step += sqrt(size);
		while (i < step && i < (int)size - 1)
		{
			right = right->next;
			i++;
		}
	}
	printf(
		"Value checked at index [%lu] = [%d]\n", right->index,
		right->n);
	printf(
		"Value found between indexes [%lu] and [%lu]\n", left->index,
		right->index);
	while (left && left->index < size)
	{
		printf(
			"Value checked at index [%lu] = [%d]\n", left->index,
			left->n);
		if (left->n == value)
			return (left);
		left = left->next;
	}
	return (NULL);
}
