#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - entry point
 * @name: namee
 * @age: agee
 * @owner: calabunga
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
