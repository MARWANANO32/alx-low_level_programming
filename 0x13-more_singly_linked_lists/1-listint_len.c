#include "lists.h"
/**
 * *listint_len - function that returns the number of elements in a linked
 * @h: the const pointer
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
