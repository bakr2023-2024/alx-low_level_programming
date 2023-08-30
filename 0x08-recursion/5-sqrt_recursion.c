#include "main.h"

/**
 * helper - Entry point
 * @n: number
 * @inc: num2
 * Return: numb
 */
int helper(int n, int inc)
{
	if (n - inc == 0)
		return (1);
	else if (n - inc < 0)
		return (-1);
	return (1 + helper(n - inc, inc + 2));
}
/**
 * _sqrt_recursion - numb
 * @n: numae
 * Return: numa
 */
int _sqrt_recursion(int n)
{
	int div;
	div = helper(n, 1);
	if (n % div != 0 || div * div != n)
		return (-1);
	return (div);
}
