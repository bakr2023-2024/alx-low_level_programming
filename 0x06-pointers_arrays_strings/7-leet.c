#include "main.h"

/**
 * leet - Entry point
 * @s: string
 * Return: string after
 */

char *leet(char *s)
{
	int i, j;
	char *alpha = "AiaEeOoTtLl";
	char *code = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			printf("Comparing %c with %c\n",s[i],alpha[j]);
			if (s[i] == alpha[j])
			{
				printf("match\n");
				s[i] = code[j];
				printf("after: %c\n",s[i]);
			}
		}
	}
	return (s);
}
