#include "search_algos.h"
/**
 * binary_adv - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: min index of the sub array to search in
 * @right: max index of the sub array to search in
 * @value: value to search for
 *
 * Return: the leftmost index where value is located
 */
int binary_adv(int *array, int left, int right, int value)
{
	int mid, tmp;

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
	if (left == right)
	{
		if (array[left] == value)
			return (left);
		else
			return (-1);
	}
	if (left > right)
		return (-1);
	mid = (left + right) / 2;
	if (array[mid] < value)
		return (binary_adv(array, mid + 1, right, value));
	else
		return (binary_adv(array, left, mid, value));
}
/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the leftmost index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ans;

	if (array == NULL)
		return (-1);
	ans = binary_adv(array, 0, (int)size - 1, value);
	return (ans);
}
