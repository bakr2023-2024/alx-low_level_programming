#include "main.h"

/**
 * leet - Entry point
 * @s: string
 * Return: string after
 */

char *leet(char *s)
{
	int i, j;
	char *alpha = "AaEeOoTtLl";
	char *code = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; alpha[j] != '\0'; j++)
			if (s[i] == alpha[j])
				s[i] = code[j];
	return (s);
}
