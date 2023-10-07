#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	c = a + n;

	ptr = malloc(c + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < c; i++)

	if (i < a)
		ptr[i] = s1[i];

	else
		ptr[i] = s2[i - a];

	sout[i] = '\0';

	return (ptr);
}
