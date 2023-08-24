#include "main.h"

/**
 * _strcat - Entry point
 * @dest: destination
 * @src: source
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
		*(dest + i++) = *(src + j++);
	*(dest + i) = '\0';
	return (dest);
}
