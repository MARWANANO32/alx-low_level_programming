#include "main.h"

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	return (i);
}
