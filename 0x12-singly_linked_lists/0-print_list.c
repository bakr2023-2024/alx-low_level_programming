#include "lists.h"
/**
 * print_list - entry point
 * @h: ambola
 * Return: kaka
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;
	list_t *ptr = h;

	if (ptr == NULL)
		return (0);
	while (ptr->next != NULL)
	{
		if (ptr->next == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		sum++;
		ptr = ptr->next;
	}
	return (sum);
}
