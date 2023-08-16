#include <stdio.h>

/**
 * fib - returns value of term n of fib
 * @n: the term of fib series
 * Return: the value corresponding to term n
 */
int fib(int n)
{
	if (n == 2)
		return (2);
	else if (n == 1)
		return (1);
	else
		return (fib(n - 1) + fib(n - 2));
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", fib(i));
		if (i < 50)
			printf(", ");
	}
	return (0);
}
