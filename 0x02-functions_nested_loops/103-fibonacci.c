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
	int i = 1, val, sum = 0;

	do {
		val = fib(i++);
		if (val % 2 == 0)
			sum += val;
	} while (val <= 4000000);
	printf("%d\n", sum);
	return (0);
}
