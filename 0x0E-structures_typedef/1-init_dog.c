#include <string.h>
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *init_dog - function that initialize a variable of type struct dog
 * @d:pointer to struct initialize a variables
 * @name: the name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
