#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	if (separator == NULL || n == 0)
		return;
	va_start(param, n);
	i = 0;
	while (i < n - 1)
	{
		printf("%d%s", va_arg(param, int), separator);
		i++;
	}
	printf("%d\n", va_arg(param, int));
	va_end(param);
}
