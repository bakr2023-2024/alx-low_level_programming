#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: ambola
 * @size: zabola
 * @cmp: kabola
 * Return: dame ti cosita
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (array[i]);
	}
	return (-1);
}
