#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array
 * @n: size 
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp;
	
	for(; i < j / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j++;
	}
}
