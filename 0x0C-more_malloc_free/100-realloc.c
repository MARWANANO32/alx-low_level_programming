#include "main.h"
#include <stdlib.h>

/***/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr;
	unsigned int i;
	char *mar

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr[i] = old_ptr[i];
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size = 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(new_size);
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	mar = ptr;


}
