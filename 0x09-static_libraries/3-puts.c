#include "main.h"

/**
 * _puts - Entry point
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		_putchar(*(str + (i++)));
	_putchar('\n');
}
