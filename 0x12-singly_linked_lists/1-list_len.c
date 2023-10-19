#include "lists.h"
#include <stdlib.h>

/**
 * *list_len - that returns the number of elements in a linked
 * @h: const pointer
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
