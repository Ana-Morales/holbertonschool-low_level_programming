#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a matrix of ints
 *
 * @a: matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int col, row, sum1, diag2, sum2;


	sum1 = 0;
	row = 0;
	diag2 = size - 1;
	sum2 = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (col == row)
				sum1 = sum1 + *(a + col);
			if (col == diag2)
			{
				sum2 = sum2 + *(a + col);
				diag2--;
			}
			col++;
		}
		a = a + size;
		row++;
	}
	printf("%d, %d\n", sum1, sum2);
}
