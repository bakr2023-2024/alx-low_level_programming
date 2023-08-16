#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print from n to 98
 * @n: number to start printing from
 * Return: void
 */

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (i > 98)
			i--;
		else if (i < 98)
			i++;
	}
	printf("%d\n", i);
}
