#include "search_algos.h"
/**
 * binary_search_2 - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: min index of the subarray to search in
 * @right: max index of the subarray to search in
 * @value: value to search for
 *
 * Return:  the first index where value is located
 */
int binary_search_2(int *array, int left, int right, int value)
{
	int m, tmp;

	if (array == NULL)
		return (-1);
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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @arr: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located
 */
int exponential_search(int *arr, size_t size, int value)
{
	int bound, max;

	if (arr == NULL || size == 0)
	{
		return (-1);
	}
	bound = 1;
	while (bound < (int)size && arr[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, arr[bound]);
		bound *= 2;
	}
	if (bound + 1 < (int)size)
		max = bound;
	else
		max = (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", bound / 2, max);
	return (binary_search_2(arr, bound / 2, max, value));
}
