#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		if (n >= 10)
			putchar(n + 87);
		else
			putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
