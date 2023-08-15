#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; i < sizeof(str); i++)
	{
		putchar(str[i]);
	}
	return (0);
}
