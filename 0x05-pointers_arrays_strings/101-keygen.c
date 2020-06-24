#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  generates random int
 *
 * Return: the integer generated
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	return (n);
}
