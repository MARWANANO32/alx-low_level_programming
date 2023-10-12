#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print input numbers
 * @separator: is the string to be printed between nums
 * @n: is the number of integers passed to the function
 * Return: NULL or nums
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (a < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
