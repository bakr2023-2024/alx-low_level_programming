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
	int i = 0;
	while (src[j] != '\0' && j <= n)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	for(; j <= n; j++)
		*(dest + j++) = '\0';
	return (dest);
}
