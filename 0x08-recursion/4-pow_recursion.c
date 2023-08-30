#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: num1
 * @y: num2
 * Return: POWWEEEER
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(y - 1));
}
