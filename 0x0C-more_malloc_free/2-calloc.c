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
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		point[i] = 0;
	return (point);
}
