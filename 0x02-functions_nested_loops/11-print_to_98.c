#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n < 0)
		return;

	for(i = n; i <= 98; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
}
