#include <stdio.h>
#include "main.h"
/**
 * times_table - dame tu coista
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10 ; j++)
		{
			int k = i * j;

			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
