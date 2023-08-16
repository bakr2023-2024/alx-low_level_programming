#include <stdio.h>
#include "main.h"
/**
 * times_table - dame tu coista
 * Return: void
 */

void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		int j;
		
		for (j = 0; j <= n; j++)
		{
			int k = i * j;

			if (k >= 100)
			{
				if (j > 0)
					_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
			}
			else if (k >= 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((k / 10) + '0');
			}
			else
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar((k % 10) + '0');
			if(j < n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
