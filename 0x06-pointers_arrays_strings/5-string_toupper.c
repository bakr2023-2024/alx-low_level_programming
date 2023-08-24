#include "main.h"

/**
 * string_toupper - Entry point
 * @s: string
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0, j = 0;

	while (s[j] != '\0')
		j++;
	for (; i < j; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
