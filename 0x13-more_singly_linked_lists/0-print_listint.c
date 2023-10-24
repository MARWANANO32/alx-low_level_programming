#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * *print_listint - print all the elements
 * @h: const pointer
 * n: the number of nodes
 * @return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
