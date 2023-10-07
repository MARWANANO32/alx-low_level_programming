#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array,
 * @nmemb: number of element
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *ptr

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
