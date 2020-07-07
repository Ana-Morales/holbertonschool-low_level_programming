#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to 2 dim array of int
 */
int **alloc_grid(int width, int height)
{
	int **g, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = (int **)malloc(sizeof(int *) * height);
	if (g == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		g[i] = (int *)malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			free(g);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			g[i][j] = 0;
			j++;
		}
		i++;
	}

	return (g);
}
