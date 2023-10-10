#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *print_dog -  function that prints a struct dog
 * @d: a pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("", d);
		return;

	if (d->name == NULL)
		printf("name%s : nil\n", d->name);
	if (d->owner == NULL)
		printf("owner%s : nil\n", d->owner);
}


