#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;
		
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j < 10 ;j++)
		{
			int k = i * j;

			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
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
