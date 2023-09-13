#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: ambola
 * @size: kabola
 * @action: zabola
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		action(arr[i]);
}
