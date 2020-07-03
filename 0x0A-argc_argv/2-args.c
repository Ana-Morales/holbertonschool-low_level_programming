#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc-- != 0)
		printf("%s\n", *argv++);
	return (0);
}
