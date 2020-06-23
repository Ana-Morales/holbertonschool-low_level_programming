#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n:  the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i, len, j, n1;

	i = 0;
	while (a[i] != '\0')
	{
		len = i + 1;
		i++;
		}
	if (n <= len)
	{
		j = 0;
		while (j < n)
		{
			printf("%d", a[j]);
			if (j < (n - 1))
				printf(", ");
			j++;
		}
	}
	else
	{
		n1 = len;
		j = 0;
		while (j < n1)
		{
			printf("%d", a[j]);
			if (j < (n1 - 1))
				printf(", ");
			j++;
		}
	}
	printf("\n");
}
