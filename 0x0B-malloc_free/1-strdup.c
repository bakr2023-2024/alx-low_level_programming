#include "main.h"

/**
 * _strdup - Entry point
 * @str: string
 * Return: char *
 */

char *_strdup(char *str)
{
	char *str2;

	str2 = malloc(strlen(str) + 1);
	if (str2 == NULL)
		return (NULL);
	strcpy(str2, str);
	return (str2);
}
