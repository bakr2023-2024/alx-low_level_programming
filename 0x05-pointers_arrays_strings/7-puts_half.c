#include "main.h"

/**
 * puts_half - Entry point
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j  = 0;

	while (*(str + i) != '\0')
		i++;
	i--;
	while (j <= i / 2)
		_putchar(*(str + (j++)));
	_putchar('\n');
}
