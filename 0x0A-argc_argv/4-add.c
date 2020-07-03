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
	int sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
