#include "main.h"
/**
 * string_nconcat - Entry point
 * @s1: str
 * @s2: ss
 * @n: num
 * Return: ambola
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);
	str = malloc(i + j - 1);
	if (str == NULL)
		return (NULL);
	if (n > j)
		n = j;
	strncat(str, s1, i);
	strncat(str, s2, n);
	return (str);
}
