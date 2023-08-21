#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: str
 * Return: void
 */

void rev_string(char *s)
{
	int i = _strlen(s), j = 0;

	i--;
	while (i != j)
	{
		char tmp = *(s + (j));
		*(s + i) = *(s + j);
		*(s + j) = tmp;
		i--;
		j++;
	}
}
