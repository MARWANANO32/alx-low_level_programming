#include "main.h"

/**
 * *_strchr - located a character in a string
 * @c: char to find
 * @s: string to search
 *
 * Return:  a pointer to the first occurrence of the character
 * c  a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (1)
	{
		i = *s++;

		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}

