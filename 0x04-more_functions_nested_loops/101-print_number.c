#include "main.h"
/**
 * print_number - prints a number
 * @n: the number to print
 * Return: void
 */

void print_number(int n)
{
	int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}
	if ((k / 10) > 0)
		print_number(k / 10);
	_putchar((k % 10) + '0');
}
