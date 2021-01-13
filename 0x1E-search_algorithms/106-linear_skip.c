#include "search_algos.h"
#include <math.h>
/**
 * linear_skip - searches for a value in a sorted skip list of integers using
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left, *right;

	if (list == NULL)
		return (NULL);
	left = list;
	right = list->express;
	while (left->express && right->n < value)
	{
		printf(
			"Value checked at index [%lu] = [%d]\n", right->index,
			right->n);
		left = right;
		if (right->express)
			right = right->express;
		else
			while (right->next)
				right = right->next;
	}
	if (left->express)
	{
		printf(
			"Value checked at index [%lu] = [%d]\n", right->index,
			right->n);
	}
	printf(
		"Value found between indexes [%lu] and [%lu]\n", left->index,
		right->index);
	while (left)
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
