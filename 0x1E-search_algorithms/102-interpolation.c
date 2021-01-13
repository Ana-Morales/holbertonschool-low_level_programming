#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @ar: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @val: value to search for
 *
 * Return:  the first index where value is located
 */
int interpolation_search(int *ar, size_t size, int val)
{
	int lo = 0;
	int hi = size - 1;
	int mid;
	int mul;

	if (ar == NULL)
		return (-1);
	while ((ar[hi] != ar[lo]) && (val >= ar[lo]) && (val <= ar[hi]))
	{
		mul = (val - ar[lo]);
		mid = lo + (((double)(hi - lo) / (ar[hi] - ar[lo])) * mul);
		printf("Value checked array[%d] = [%d]\n", mid, ar[mid]);
		if (ar[mid] < val)
			lo = mid + 1;
		else if (val < ar[mid])
			hi = mid - 1;
		else
			return (mid);
	}
	if (val == ar[lo])
	{
		printf("Value checked array[%d] = [%d]\n", mid, ar[mid]);
		return (lo);
	}
	else
	{
		mul = (val - ar[lo]);
		mid = lo + (((double)(hi - lo) / (ar[hi] - ar[lo])) * mul);
		printf("Value checked array[%d] is out of range\n", mid);
		return (-1);
	}
}
