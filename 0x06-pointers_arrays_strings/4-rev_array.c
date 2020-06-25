#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp, i;
	int *e;

	e = a;
	i = 0;
	while (i < n)
	{
		e++;
		i++;
	}
	e--;
	while (a < e)
	{
		temp = *a;
		*a = *e;
		*e = temp;
		a++;
		e--;
	}

}
