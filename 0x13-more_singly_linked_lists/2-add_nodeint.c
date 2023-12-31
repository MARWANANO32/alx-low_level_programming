#include "lists.h"

/**
 * *add_nodeint - function that adds a new node
 * @n: const int
 * @head: pointer
 *
 * Return:  the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
