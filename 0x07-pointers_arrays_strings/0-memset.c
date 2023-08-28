#include "main.h"

/**
 * _memset - Entry point
 * @s: hakuna
 * @b: matata
 * @n: ambola
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i=0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
