#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar\n";
	unsigned long int i;

	for (i = 0; i < sizeof(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
