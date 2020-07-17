#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all its parameters, o if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
