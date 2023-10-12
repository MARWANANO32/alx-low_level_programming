#include "variadic_functions.h"
#include <stdarg.h>

/**
 * *sum_them_all - function that returns the sum of all its parameters.
 * @n: the constant number of bytes
 *
 * return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int a;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (a = 0; a < n; a++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);

}
