#include "main.h"

/**
 * _strncat - Entry point
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (j < n)
	{
		if (*(src + j) == '\0')
			break;
		*(dest + i++) = *(src + j++);
	}
		*(dest + i) = '\0';
	return (dest);
}
