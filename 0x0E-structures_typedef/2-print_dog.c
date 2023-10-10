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
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	else
		printf("age:%f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s\nowner: %s\n", d->name, d->owner);
}


