#include "main.h"

/**
 * alloc_grid - Entry point
 * @width: widthh
 * @height: heighth
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **rows;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = malloc(sizeof(int *) * height);
	if (rows == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(rows + i) = malloc(sizeof(int) * width);
		if (*(rows + i) == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(*(rows + j));
			}
			free(rows);
			return (NULL);
		}
	}
	return (rows);
}
