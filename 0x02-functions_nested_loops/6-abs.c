#include <stdio.h>
#include "main.h"
/**
 * _abs - returns absolute value of an integer
 * @c: integer to be checked
 * Return: -c if negative, otherwise c
 */

int _abs(int c)
{
	return ((c < 0) ? -c : c);
}
