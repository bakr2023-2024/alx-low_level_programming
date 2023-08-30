#include "main.h"

/**
 * factorial - Entry point
 * @n: number
 * Return: factpr
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (n);
	return (n * factorial(n - 1));
}
