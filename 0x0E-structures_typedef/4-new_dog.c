#include "dog.h"
/**
 * new_dog: Entry point
 * @name: nibib
 * @age: alala
 * @owner: apaap
 * Return: bibi
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	int i = 0;
	dog_t dog;

	n = malloc(sizeof(*name));
	o = malloc(sizeof(*owner));
	dog = malloc(sizeof(dog_t));
	if (dog == NULL || o == NULL || n == NULL)
		return (NULL);
	while (name[i] != '\0')
		n[i] = name[i++];
	n[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
		o[i] = owner[i++];
	dog->name = n;
	dog->owner = o;
	dog->age = age;
	return (dog);
}
