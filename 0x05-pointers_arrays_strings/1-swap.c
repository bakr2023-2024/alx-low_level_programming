#include "main.h"

/**
 * swap_int - Entry point
 * @a: first num
 * @b: second num
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
