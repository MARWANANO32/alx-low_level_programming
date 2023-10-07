#include "main.h"

/***/

void *malloc_checked(unsigned int b)
{
	int *ptr = (int *) malloc(size * sizeof(int));
	int i;

	if (ptr == NULL)
	{
        printf("Memory allocation failed\n");
        exit(1);
	}
	for (int i = 0; i < b; i++)
	{
        ptr[i] = i + 1;
	}
	return ptr;
}
