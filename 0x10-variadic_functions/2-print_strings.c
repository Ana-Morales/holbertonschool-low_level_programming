#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *c;

	if (separator == NULL || n == 0)
		return;
	va_start(args, n);
	i = 0;
	while (i < n)
	{
		c = va_arg(args, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
