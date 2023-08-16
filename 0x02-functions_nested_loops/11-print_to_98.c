#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 0)
		return;
	int i;
	for(i = n; i <= 98; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
}
