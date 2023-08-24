#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: destination
 * @s2: source
 * Return: 1 or 0 or -1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return ((s1[i] > s2[i]) ? 1 : -1)
	}
	return (0);
}
