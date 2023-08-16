#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int i, a = 1, b = 2, c;

	printf("%llu, %llu, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%llu", c);
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
