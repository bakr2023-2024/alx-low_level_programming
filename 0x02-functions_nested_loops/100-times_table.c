#include <stdio.h>
#include "main.h"
/**
 * times_table - dame tu coista
 * Return: void
 */

void times_table(void)
{
	int i;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < n; i++)
	{
		int j;
		
		for (j = 0; j < n; j++)
		{
			int k = i * j;

			if (k >= 100)
			{
				int t = k / 10;

				if (j > 0 && j < n - 1)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((k / 100) + '0');
				_putchar((t % 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k >= 10)
			{
				if (j < 0 && j < n - 1)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((k / 10) + '0');
				_putchar(k + '0');
			}
			else
			{
				if (j > 0 && j < n -1)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
	}
}
