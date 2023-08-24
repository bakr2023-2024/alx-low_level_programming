#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i++) = *(src + j++);
	}
	for(; j <= n; j++)
		*(dest + i++) = '\0';
	return (dest);
}
