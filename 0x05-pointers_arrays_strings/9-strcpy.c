#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: destination
 * @src: ambola samina 
 * Return: void
 */

char *_strcpy(char *dest ,char *src)
{
	int i;

	for(i = 0; *(str + i) != '\0'; i++)
		*(dest + i) = *(str + i);
	*(dest + i) = *(str + i);
	return dest;
}
