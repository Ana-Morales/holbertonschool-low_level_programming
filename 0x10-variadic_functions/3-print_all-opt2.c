#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, c;
	int i = 0, intv, sep;
	float f;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			intv = va_arg(args, int);
			printf("%d", intv);
			sep = 1;
			break;
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			sep = 1;
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			sep = 1;
			break;
		case 's':
			s = va_arg(args, char *);
			sep = 1;
			printf("%s", (s == NULL) ? "(nil)" : s);
			break;
		default:
			sep = 0;
		}
		if (format[i + 1] != '\0' && sep == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
