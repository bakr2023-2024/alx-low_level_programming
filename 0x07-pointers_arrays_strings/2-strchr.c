#include "main.h"

/**
 * _strchr - Entry point
 * @s: string
 * @c: char
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return s + i;
	return (NULL);
}
