#include "main.h"

/**
 * create_array - Entry point
 * @size: num
 * @c: char
 * Return: char *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	memset(arr, c, size * sizeof(char));
	return (arr);
}
