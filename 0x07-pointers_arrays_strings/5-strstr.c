#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: zabola
 * @needle: ambola
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		k = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[k] == needle[j])
			{
				printf("Found %c\n",needle[j]);
				k++;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
