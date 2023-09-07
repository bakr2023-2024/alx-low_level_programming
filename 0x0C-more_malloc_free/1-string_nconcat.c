#include "main.h"
/**
 * _strlen - ambola
 * @s: string
 * Return: number
 */
unsigned int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i - 1);
}
/**
 * string_nconcat - Entry point
 * @s1: str
 * @s2: ss
 * @n: num
 * Return: ambola
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, p, q;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = _strlen(s1);
	j = _strlen(s2);
	str = malloc(i + j + 1);
	if (str == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
		str[p] = s1[p];
	for (q = 0; q < j && q < n; q++)
		str[p++] = s2[q];
	str[p] = '\0';
	return (str);
}
