#include "main.h"

/**
 * print_rev - ana maktob 3la we4y
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	while (i >= 0)
		_putchar(*(s + (i--)));
}
