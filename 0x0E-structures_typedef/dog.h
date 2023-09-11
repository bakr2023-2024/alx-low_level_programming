#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
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
/**
 * dog_t - kaka bibi
 */
typedef struct dog dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *dog);
#endif
