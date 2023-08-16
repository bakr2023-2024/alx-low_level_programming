#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, a = 1, b = 2, c, fib11, fib12, fib21, fib22, h1, h2;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 92; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		printf(", ");
	}
	fib11 = a / 10000000000;
	fib12 = a % 10000000000;
	fib21 = b / 10000000000;
	fib22 = b % 10000000000;
	for (i = 93; i <= 98; i++)
	{
		h1 = fib11 + fib21;
		h2 = fib12 + fib22;
		if (h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
