#include "main.h"

/**
 * puts2 - Entry point
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
		i++;
	i--;
	while (j <= i)
	{
		_putchar(*(str + j));
		j += 2;
	}
	_putchar('\n');
}
