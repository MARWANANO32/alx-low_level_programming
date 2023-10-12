#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * *print_strings - function that prints strings
 * @separator: a const pointer
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int a;
	char *mar;


	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		mar = va_arg(args, char *);
		if (mar == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", mar);
		}
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");


}
