#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument values
 * Return: 0 is success, 1 if error
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 1;
	argv++;
	while (i < argc)
	{
		j = 0;
		while (*(*argv + j) != '\0')
		{
			if (*(*argv + j) < '0' || *(*argv + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(*argv);
		i++;
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
