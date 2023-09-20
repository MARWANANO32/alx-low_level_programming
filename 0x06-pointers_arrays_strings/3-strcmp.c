#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	char *s1;
	char *s2;

	int cmp = strcmp(*s1, *s2);

	if (cmp > 0)
		printf("*s1 > *s2\n");
	else
	{
		printf("*s1 < *s2\n");
	}
	return (*s1, *s2);
}
