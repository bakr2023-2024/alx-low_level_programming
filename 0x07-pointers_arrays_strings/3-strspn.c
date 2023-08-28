#include "main.h"

/**
 * _strspn - Entry point
 * @s: string
 * @accept: string2
 * Return: length of segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, max = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			if (max < len)
				max = len;
			len = 0;
		}
	}
	max = len;
	return (max);
}
