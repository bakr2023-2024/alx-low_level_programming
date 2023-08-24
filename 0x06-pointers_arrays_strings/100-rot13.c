#include "main.h"

/**
 * rot13 - Entry point
 * @s: string
 * Return: sring afer
 */

char *rot13(char *s)
{
	int i, j;
	char *og = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *co = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; og[j] != '\0'; j++)
			if (s[i] == og[j]){
				s[i] = co[j];
				break;
			}
	}
	return (s);
}
