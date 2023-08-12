#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	for (m = 0; m < 100; m++)
	{
		for (n = m + 1; n < 100; n++)
		{
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			putchar(' ');
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (m == 98)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
