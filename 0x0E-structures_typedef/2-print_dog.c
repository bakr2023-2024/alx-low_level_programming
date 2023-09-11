#include "dog.h"
/**
 * print_dog - Entry point
 * @d: ambola
 */
void print_dog(dog_t dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
