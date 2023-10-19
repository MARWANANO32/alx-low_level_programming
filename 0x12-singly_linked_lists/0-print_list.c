#include "lists"
#include <stdio.h>

/**
 * *print_list - prints all the elements
 * @h: const pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str");
		h = h->name;
		n++;
	}
	return (n);
}
