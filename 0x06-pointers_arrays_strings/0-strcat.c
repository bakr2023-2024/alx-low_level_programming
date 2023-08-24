#include "main.h"

/**
 * _strcat - Entry point
 * @dest: destination
 * @src: source
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, ptr = 0;
	char *res;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
		j++;
	k = i + j - 1;
	res = (char *) malloc((k) * sizeof(char));
	while (ptr < i)
	{
		*(res + ptr) = *(dest + ptr);
		ptr++;
	}
	ptr = 0;
	for (; i <= k; ptr++)
		*(res + (i++)) = *(src + ptr);
	dest = res;
	return (dest);
}
