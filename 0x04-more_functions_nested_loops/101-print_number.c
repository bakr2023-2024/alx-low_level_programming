#include "main.h"
/**
 * print_number - prints a number
 * @n: the number to print
 * Return: void
 */

void print_number(int n)
{
	int i = 0, k = n, p, q;

	do {
		k /= 10;
		i++;
	} while (k != 0);
	if (n < 0)
	{
		k = -n;
		_putchar('-');
	}
	else
		k = n;
	for (p = 0; p < i; p++)
	{
		int s = k;

		for (q = i - p - 1; q > 0; q--)
			s /= 10;
		_putchar((s % 10) + '0');
	}
}
