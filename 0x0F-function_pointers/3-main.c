#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main -  prints the result of the operation
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, c;
	int (*opp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	opp = get_op_func(argv[2]);
	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((opp == op_div || opp == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = opp(a, b);
	printf("%d\n", c);
	return (0);
}
