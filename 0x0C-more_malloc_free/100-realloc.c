#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 *
 * Return: ptr.
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mar;
	char *old_mar;

	unsigned int i = 0;

	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
			mar[i] = old_mar[i];
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (mar == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return(malloc(new_size));
	}
	mar = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (mar);
}
