#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic
 * @name: first member
 * @age: the second member
 * @owner: the third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
