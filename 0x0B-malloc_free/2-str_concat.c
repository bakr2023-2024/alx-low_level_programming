#include "main.h"

/**
 * str_concat - Entry point
 * @s1: string1
 * @s2: string2
 * Return: string3
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(strlen(s1) + strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	strcat(s3, s1);
	strcat(s3, s2);
	return (s3);
}
