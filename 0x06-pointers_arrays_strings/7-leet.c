#include "main.h"

/**
 * leet - Entry point
 * @s: string
 * Return: string after
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char *alpha = "aAeEoOtTlL";
	char *code = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		for (; alpha[j] != '\0'; j++)
			if (s[i] == alpha[j])
				s[i] = code[j];
	}
	return (s);
}
