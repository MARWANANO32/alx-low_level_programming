#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * *print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list(args);
	char *mar;
	const char t_arg[] = "cifs";
	unsigned int i = 0, j, c = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), c = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int)), c = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double)), c = 1;
			break;
			case 's':
			mar = va_arg(args, char *), c = 1;
			if (!mar)
			{
				printf("(nil)");
				break;
			}
			printf("%s", mar);
			break;
		}
		i++;
	}
	printf("\n"), va_end(args);
}
