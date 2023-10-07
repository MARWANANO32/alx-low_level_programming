#include "main.h"

/***/

void *malloc_checked(unsigned int b)
{
	int *ptr = (int *) malloc(size * sizeof(b));
	int i;

	if (ptr == NULL)
	{
        printf("Memory allocation failed\n");
        exit(98);
	}
	return ptr;
}
