#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: string
 * @size: size of ambola
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, dig1 = 0, dig2 = 0;

	for (i = 0; i < size ; i++)
		dig1 += a[i][i];
	for (i = size - 1; i >= 0; i--)
		dig2 += a[i][i];
	printf("%d, %d", dig1, dig2);
}
