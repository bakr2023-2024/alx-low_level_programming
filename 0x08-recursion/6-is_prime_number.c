#include "main.h"
/**
 * helper - Entry point
 * @n: num
 * @inc: num2
 * Return: integer
 */
int helper(int n, int inc)
{
	if (n <= 1)
		return (0);
	if (inc == n)
		return (n);
	else if (n % inc == 0)
		return (0);
	return (helper(n, inc + 1));

}
/**
 * is_prime_number - Entry point
 * @n: number
 * Return: num
 */
int is_prime_number(int n)
{
	return ((helper(n, 2) == n) ? 1 : 0);
}
