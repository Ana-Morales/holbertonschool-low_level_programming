#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, m, tmp;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		tmp = left;
		printf("Searching in array: ");
		while (tmp <= right)
		{
			printf("%d", array[tmp]);
			if (tmp != right)
				printf(", ");
			else
				printf("\n");
			tmp++;
		}
		m = (left + right) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			right = m - 1;
		else
			left = m + 1;
	}
	return (-1);
}
