#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 15; n++)
	{
		if (n == 10)
			putchar('a');
		else if (n == 11)
			putchar('b');
		else if (n == 12)
			putchar('c');
		else if (n == 13)
			putchar('d');
		else if (n == 14)
			putchar('e');
		else if (n == 15)
			putchar('f');
		else
			putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
