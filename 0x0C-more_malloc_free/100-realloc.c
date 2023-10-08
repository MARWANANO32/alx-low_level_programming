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

	unsigned int i;

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
		mar = malloc(new_size);
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		mar = malloc(new_size);
		if (mar == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)mar + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (mar);
}
