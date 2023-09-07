#include "main.h"

/**
 * array_range - Entry point
 * @min: num
 * @max: bum
 * Return: ambola
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *point;

	if (min > max)
		return (NULL);
	point = malloc((max - min + 1) * sizeof(int));
	if (point == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		point[j++] = i;
	return (point);
}
