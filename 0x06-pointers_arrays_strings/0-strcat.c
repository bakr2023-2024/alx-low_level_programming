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
		j++;
	int k = i + j - 1;
	char *res = (char *) malloc((k) * sizeof(char));
	int ptr = 0;

	while (ptr < i)
	{
		*(res + ptr) = *(dest + ptr);
		ptr++;
	}
	for (ptr = i; ptr <= k; ptr++)
		*(res + ptr) = *(src + ptr);
	return (res);
}
