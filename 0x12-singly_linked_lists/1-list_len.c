#include "lists.h"
/**
 * list_len - entry point
 * @h: ambola
 * Return: kaka
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h= h->next;
	}
	return (sum);
}
