#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints and returns last digit
 * @c: integer to be checked
 * Return: last digit of c
 */

int print_last_digit(int c)
{
	int ch = c % 10;

	if(c < 0)
		ch = -ch;
	_putchar(ch + '0');
	return (ch);
}
