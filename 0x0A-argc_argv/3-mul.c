#include <stdio.h>
#include <stdlib.h>
/**
 * main -  multiplies two numbers
 * @argc: argument count
 * @argv: argument values
 * Return: 0 is success, 1 if error
 */
int main(int argc, char **argv)
{
	int mul;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
