#include "main.h"
#include <string.h>

/**
 * reverse_array - reserves an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, p;

	j  = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[j];
		a[j--] = p;
	}
}
