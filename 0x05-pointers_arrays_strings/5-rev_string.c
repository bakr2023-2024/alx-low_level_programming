#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: str
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
		i++;
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
