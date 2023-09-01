#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: pointer to ambola
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
