#include "lists.h"
/**
 * print_list - entry point
 * @h: ambola
 * Return: kaka
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		sum++;
		h = h->next;
	}
	return (sum);
}
