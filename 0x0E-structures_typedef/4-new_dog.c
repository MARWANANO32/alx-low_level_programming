#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, Lname, Lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (Lname = 0; name[Lname]; Lname++)
		;

	for (Lowner = 0; owner[Lowner]; Lowner++)
		;

	p_dog->name = malloc(Lname + 1);
	p_dog->owner = malloc(Lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (a = 0; a < Lname; a++)
	p_dog->name[a] = name[a];
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < Lowner; a++)
		p_dog->owner[a] = owner[a];
	p_dog->owner[a] = '\0';

	return (p_dog);
}
