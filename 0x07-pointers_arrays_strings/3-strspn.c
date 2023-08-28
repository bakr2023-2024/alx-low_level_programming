#include "main.h"

/**
 * _strspn - Entry point
 * @s: string
 * @accept: string2
 * Return: length of segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, max = 0, p = 0, q = 0;

	while (s[p] != '\0')
		p++;
	while(accept[q] != '\0')
		q++;
	for (i = 0; i <= p; i++)
	{
		for (j = 0; j <= q; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (j > q)
		{
			if (max < len)
				max = len;
			len = 0;
		}
	}
	return (max);
}
