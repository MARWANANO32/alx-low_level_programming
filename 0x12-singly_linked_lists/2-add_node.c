#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - that adds a new node
 * @head: double pointer
 * @str: new string
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *asd;
	unsigned int len = 0;

	while (str[len])
		len++;

	asd = malloc(sizeof(list_t));
	if (asd == NULL)
		return (NULL);

	asd->str = strdup(str);
	asd->len = len;
	asd->next = (*head);
	(*head) = asd;

	return (*head);
}
