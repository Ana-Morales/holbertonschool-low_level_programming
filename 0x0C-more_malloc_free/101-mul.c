#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _isdigit - check if all elements of av are digits
 * @ac: argument count
 * @av: argument values
 * Return: 0 if is digit, 1 if not
 */
int _isdigit(int ac, char **av)
{
	int i, j;

	i = 1;
	av++;
	while (i < ac)
	{
		j = 0;
		while (*(*av + j) != '\0')
		{
			if (*(*av + j) < '0' || *(*av + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
		av++;
	}
	return (0);
}
/**
 * _mul -  multiplies two numbers
 * @a: first number
 * @b:second numbers
 * Return: result of multiplication
 */
int *_mul(char *a, char *b)
{
	int *check;
	int *mul;

	check = malloc(atoi(a) * atoi(b));
	if (check == NULL)
		return (NULL);
	mul = malloc(sizeof(int));
	if (mul == NULL)
		return (NULL);
	*mul = atoi(a) * atoi(b);
	return (mul);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 * Return: 0 is success, 1 if error
 */
int main(int argc, char **argv)
{
	int *mul;
	int i;


	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	i = 1;
	while (i < argc)
	{
		if (_isdigit(argc, argv) == 1)
		{
			exit(98);
		}
		i++;
	}
	mul = _mul(argv[1], argv[2]);
	if (mul == NULL)
		exit(98);
	printf("%d\n", *mul);
	free(mul);
	return (0);
}
