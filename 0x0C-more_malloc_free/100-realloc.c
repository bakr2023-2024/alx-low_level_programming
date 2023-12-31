#include "main.h"

/**
 * _realloc - Entry point
 * @ptr: shabola
 * @old_size: zabola
 * @new_size: ambola
 * Return: bibi kaka
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr2, *ptr3;

	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	ptr3 = (char *) ptr;
	for (i = 0; i < old_size; i++)
		ptr2[i] = ptr3[i];
	free(ptr);
	return (ptr2);
}
