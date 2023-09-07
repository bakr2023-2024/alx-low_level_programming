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
	unsigned int i, j, p;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);
	str = malloc(i + n + 1);
	if (str == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
		str[p] = s1[p];
	for (p = 0; p <= j && p <= n; p++)
		str[p + i] = s2[p];
	return (str);
}
