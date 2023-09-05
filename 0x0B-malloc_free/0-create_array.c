#include "main.h"

/**
 * create_array - Entry point
 * @size: num
 * @c: char
 * Return: char *
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	*(arr) = c;
	return (arr);
}
