#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i = n;

	if (n < 0)
		return;
	while ( i != 98)
	{
		printf("%d, ", i);
		if (i > 98)
			i--;
		else if (i < 98)
			i++;
	}
	printf("%d\n", i);
}
