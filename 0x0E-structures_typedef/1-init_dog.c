#include "dog.h"
/**
 * init_dog - Entry ppint
 * @d: dogo
 * @name: messi
 * @age: aaage
 * @owner: ambola
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
