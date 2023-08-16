#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints minutes of day?
 * Return: void
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int j;

		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				putchar('0');
			putchar(i + '0');
			putchar(':');
			if (j < 10)
				putchar('0');
			putchar(j + '0');
		}
	}
}
