#include "main.h"

/**
 * _calloc - Entry point
 * @nmemb: num
 * @size: bunver
 * Return: void ambola
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	return (point);
}
