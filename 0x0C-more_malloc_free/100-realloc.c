#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block
 * @new_size: the new bytes in memory
 * @old_size: the old bytes in memory
 *
 * Return: ptr
 * if new_size == old_size, returns ptr without changes.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1;
	char *mar;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr[i] = old_ptr[i];
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
		ptr = malloc(new_size);
	}
	mar = ptr;

	return (ptr);
}
