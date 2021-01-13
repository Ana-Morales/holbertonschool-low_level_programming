#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int left, step;

	if (array == NULL)
		return (-1);
	left = 0;
	step = sqrt(size);
	while (step < (int)size && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		left = step;
		step += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%d] and [%d]\n", left, step);
	while (left < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
