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
	char str1[6] = "hello";
	char str2[] = "world";

	void *ptr

	strcat(str1, str2);

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
