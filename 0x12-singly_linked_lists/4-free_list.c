#include "lists.h"
/**
 * free_list - entry point
 * @head: ambola
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *new;
	while (ptr != NULL)
	{
		new = ptr->next;
		free (ptr);
		ptr = new;
	}
}
