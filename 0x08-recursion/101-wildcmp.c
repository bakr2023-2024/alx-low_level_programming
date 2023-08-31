#include "main.h"

/**
 * wildcmp - Entry point
 * @s1: string1
 * @s2: string2
 * Return: ambola
 */

int wildcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);

	if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));

	if (s2[0] == '*')
	{
		if (s1[0] == '\0' && s2[1] != '\0')
			return (0);
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
