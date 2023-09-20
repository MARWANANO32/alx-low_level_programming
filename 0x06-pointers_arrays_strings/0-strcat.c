#include "main.h"
#include <string.h>

/***/

char *_strcat(char *dest, char *src)
{
	char *dest[100] = "hello";
	char *src[50] = "world";
	int i;

	for (i = 0; i < 3; i++)
	{
		strcat(*dest, *src);
	}
	printf("%s\n",*dest);

	return (0);

}
