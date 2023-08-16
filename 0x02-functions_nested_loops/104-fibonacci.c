#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, c;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
