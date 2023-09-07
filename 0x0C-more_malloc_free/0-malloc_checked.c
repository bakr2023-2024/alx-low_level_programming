#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: number
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);
	if(point == NULL)
		exit(98);
	return (point);
}
