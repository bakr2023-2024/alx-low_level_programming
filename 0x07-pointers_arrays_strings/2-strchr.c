#include "main.h"

/**
 * _strchr - Entry point
 * @s: string
 * @c: char
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
{
	usigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
