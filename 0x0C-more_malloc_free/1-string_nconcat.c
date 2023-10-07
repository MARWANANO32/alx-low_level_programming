#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - to concatenates two strings.
 * @s1: the first string to append to
 * @s2: the second string to concatenate from
 * @n: the number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	char *ptr

	if (n < str2)
		s = malloc(sizeof(char) * (str2 + n + 1));
	else
		s = malloc(sizeof(char) * (str1 + str2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n >= s2)
	{
		return (s2);
	}
	if (s1 == NULL)
	{
		return ("");
	}
	return (ptr);
}
