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
		_putc(*(str + i));
	_putc('\n');
}
