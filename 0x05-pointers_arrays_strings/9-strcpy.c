#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: destination
 * @src: ambola samina
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = *(src + i);
	return (dest);
}
