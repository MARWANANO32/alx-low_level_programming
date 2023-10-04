#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	int *i = malloc(size);

	if (size == 0 || i == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		i[size] = c;
		size--;
	}
	return (i);
}
